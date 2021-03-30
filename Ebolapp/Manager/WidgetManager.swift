//
//  WidgetManager.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 13.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CommonCode
import WidgetKit

final class WidgetManager {

    enum ManagerError: Error {
        case unknown
    }
    
    static let shared = WidgetManager()
    
    private let visitsFactory = VisitsUseCaseFactory(databaseWrapper: CommonCodeDependencies.database)
    private let mapRegionsFactory = MapRegionsUseCaseFactory(
        databaseWrapper: CommonCodeDependencies.database,
        endpoints: API.endpoints
    )
    
    private lazy var getLocationUseCase = self.visitsFactory.createGetLastUserLocation()
    private lazy var getMapRegionUseCase = self.mapRegionsFactory.createGetMapRegionByPositionUseCase()
    private lazy var getMapRegionInfoUseCase = self.mapRegionsFactory.createGetMapRegionInfoUseCase()
    
    private lazy var mapper: MapRegionInfoMapperProtocol = MapRegionInfoMapper()
    
    
    func update() {
        if #available(iOS 14.0, *) {
            let operations = self.getWidgetUpdateOperations()
            let operationsQueue = OperationQueue()
            operationsQueue.maxConcurrentOperationCount = 1
            operationsQueue.addOperations(operations, waitUntilFinished: false)
        }
    }

    func getWidgetUpdateOperations() -> [Operation] {
        if #available(iOS 14.0, *) {
            let getLocationOperation = self.getLocationOperation()
            let getMapRegionIdOperation = self.getMapRegionIdOperation(getLocationOperation: getLocationOperation)
            getMapRegionIdOperation.addDependency(getLocationOperation)
            let getMapRegionInfoOperation = self.getMapRegionInfoOperation(getRegionIdOperation: getMapRegionIdOperation)
            getMapRegionInfoOperation.addDependency(getMapRegionIdOperation)
            return [getLocationOperation, getMapRegionIdOperation, getMapRegionInfoOperation]
        } else {
            return []
        }
    }

    @available(iOS 14.0, *)
    private func getLocationOperation() -> CallbackOperation<UserLocation> {
        CallbackOperation<UserLocation> { [weak self] operation in
            DispatchQueue.main.async {
                guard let self = self else {
                    operation.cancel()
                    return
                }
                self.getLocationUseCase.invoke { (location, error) in
                    guard let location = location else {
                        WidgetCenter.shared.reloadAllTimelines()
                        operation.finish(result: .failure(error ?? ManagerError.unknown))
                        return
                    }
                    operation.finish(result: .success(location))
                }
            }
        }
    }

    @available(iOS 14.0, *)
    private func getMapRegionIdOperation(getLocationOperation: CallbackOperation<UserLocation>) -> CallbackOperation<String> {
        CallbackOperation<String> { [weak self, weak getLocationOperation] operation in
            DispatchQueue.main.async {
                guard let self = self, let location = getLocationOperation?.result?.result else {
                    operation.cancel()
                    return
                }
                self.getMapRegionUseCase.invoke(position: location.position) { (regionId, error) in
                    guard let regionId = regionId else {
                        WidgetCenter.shared.reloadAllTimelines()
                        operation.finish(result: .failure(error ?? ManagerError.unknown))
                        return
                    }
                    operation.finish(result: .success(regionId))
                }
            }
        }
    }

    @available(iOS 14.0, *)
    private func getMapRegionInfoOperation(getRegionIdOperation: CallbackOperation<String>) -> CallbackOperation<MapRegionInfo> {
        CallbackOperation<MapRegionInfo> { [weak self, weak getRegionIdOperation] operation in
            DispatchQueue.main.async {
                guard let self = self, let regionId = getRegionIdOperation?.result?.result else {
                    operation.cancel()
                    return
                }
                let timestamp = Int64(Date().timeIntervalSince1970)
                self.getMapRegionInfoUseCase.invoke(regionId: regionId, timestampSec: timestamp) { [weak self] (info, error) in
                    guard let self = self, let info = info else {
                        WidgetCenter.shared.reloadAllTimelines()
                        operation.finish(result: .failure(error ?? ManagerError.unknown))
                        return
                    }
                    let model = self.mapper.mapCommonToAPI(data: info)
                    ContentManager.writeContent(data: model, to: WidgetConstants.widgetContentFileName)
                    WidgetCenter.shared.reloadAllTimelines()
                    operation.finish(result: .success(info))
                }
            }
        }
    }
}

extension WidgetManager: BackgroundOperationsProvider {

    func getOperations() -> [Operation] {
        return self.getWidgetUpdateOperations()
    }
}
