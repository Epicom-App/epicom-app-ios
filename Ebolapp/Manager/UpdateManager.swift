//
//  UpdateManager.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 16.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CommonCode

final class UpdateManager {
    
    static let shared = UpdateManager()
    private let notifications: EbolapNotifications = NotificationsManager.shared
    
    private init() {}

    private let mapRegionsCasesUseCaseFactory = MapRegionsCasesUseCaseFactory(
        endpoints: API.endpoints,
        databaseWrapper: CommonCodeDependencies.database
    )
    private let riskMatchingUseCaseFactory = RiskMatchingUseCaseFactory(
        databaseWrapper: CommonCodeDependencies.database,
        endpoints: API.endpoints
    )

    private lazy var createSaveCases = self.mapRegionsCasesUseCaseFactory.createGetRegionCases()
    private lazy var performRiskMatchingUseCase = self.riskMatchingUseCaseFactory.createGetNotNotifiedRiskMatchesUseCase()
    private lazy var markAsNotifiedUseCase = self.riskMatchingUseCaseFactory.createMarkAsNotifiedRiskMatchesUseCase()
    
    func update(completion: @escaping (Bool?, Error?) -> Void) {
        let saveCasesOperation = self.saveCasesOperation()
        let riskMatchingOperation = self.performRiskMatchingOperation()
        riskMatchingOperation.addDependency(saveCasesOperation)
        riskMatchingOperation.completionBlock = { [weak saveCasesOperation] in
            let error = saveCasesOperation?.result?.error
            let result = saveCasesOperation?.result?.result
            completion(result, error)
        }
        let operationQueue = OperationQueue()
        operationQueue.maxConcurrentOperationCount = 1
        operationQueue.addOperations([saveCasesOperation, riskMatchingOperation], waitUntilFinished: false)
    }

    func getUpdateOperations() -> [Operation] {
        return [self.saveCasesOperation(), self.performRiskMatchingOperation()]
    }

    private func saveCasesOperation() -> CallbackOperation<Bool> {
        CallbackOperation<Bool> { [weak self] operation in
            DispatchQueue.main.async {
                guard let self = self else {
                    operation.cancel()
                    return
                }
                self.createSaveCases.invoke(timestampSec: Int64(Date().timeIntervalSince1970)) { (result, error) in
                    if let error = error {
                        operation.finish(result: .failure(error))
                    } else {
                        operation.finish(result: .success(true))
                    }
                }
            }
        }
    }

    private func performRiskMatchingOperation() -> CallbackOperation<Bool> {
        CallbackOperation<Bool> { [weak self] operation in
            DispatchQueue.main.async {
                guard let self = self else {
                    operation.cancel()
                    return
                }
                self.performRiskMatchingUseCase.invoke(upToTimestampSec: Int64(Date().timeIntervalSince1970)) { [weak self] matches, _ in
                    let hasNew = (matches?.count ?? 0) > 0
                    if hasNew == true {
                        let riskMatchType = matches?.last?.type
                        let notificationType = riskMatchType.map { RiskMatchTypeMapper().mapCommonToAPI(data: $0) } ?? .unknown
                        self?.markMatchesAsNotified(matches: matches)
                        self?.notifications.showNewRiskNotification(type: notificationType)
                    }
                    operation.finish(result: .success(hasNew))
                }
            }
        }
    }

    private func markMatchesAsNotified(matches: [NotNotifiedRiskMatch]?) {
        matches.map { self.markAsNotifiedUseCase.invoke(riskMatches: $0.map { $0.riskMatch }, completionHandler: { _, _ in }) }
    }
}

extension UpdateManager: BackgroundOperationsProvider {

    func getOperations() -> [Operation] {
        return self.getUpdateOperations()
    }
}
