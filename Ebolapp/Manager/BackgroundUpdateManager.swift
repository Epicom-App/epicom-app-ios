//
//  BackgroundUpdateManager.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 19.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit
import BackgroundTasks

protocol BackgroundOperationsProvider {
    func getOperations() -> [Operation]
}

@available(iOS 13.0, *)
class BackgroundUpdateManager {

    struct Configuration {
        static let taskId = Constants.backgroundTaskId
        static let updateInterval = Constants.backgroundFetchInterval
    }

    static let shared = BackgroundUpdateManager()
    private init() {}
    private var operationsProviders: [BackgroundOperationsProvider] = []

    func configure(operationsProviders: [BackgroundOperationsProvider]) {
        self.operationsProviders = operationsProviders
        BGTaskScheduler.shared.register(forTaskWithIdentifier: Configuration.taskId, using: nil) { [weak self] (task) in
            self?.handleAppRefreshTask(task: task)
        }
        NotificationCenter.default.addObserver(
            self,
            selector: #selector(self.scheduleBackgroundTask),
            name: UIApplication.didEnterBackgroundNotification,
            object: nil
        )
    }

    @objc private func scheduleBackgroundTask() {
        let inDate = Date(timeIntervalSinceNow: Configuration.updateInterval)
        let task = BGAppRefreshTaskRequest(identifier: Configuration.taskId)
        task.earliestBeginDate = inDate
        try? BGTaskScheduler.shared.submit(task)
    }

     private func handleAppRefreshTask(task: BGTask) {
        self.scheduleBackgroundTask()
        let queue = OperationQueue()
        queue.maxConcurrentOperationCount = 1
        let operations = self.operationsProviders.reduce([]) { $0 + $1.getOperations() }
        let lastOperation = operations.last
        task.expirationHandler = {
            queue.cancelAllOperations()
        }
        lastOperation?.completionBlock = {
            task.setTaskCompleted(success: !lastOperation!.isCancelled)
        }
        queue.addOperations(operations, waitUntilFinished: false)
    }
}
