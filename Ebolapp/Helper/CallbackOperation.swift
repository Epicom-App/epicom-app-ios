//
//  CallbackOperation.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 21.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation

final class CallbackOperation<T>: Operation {

    enum OperationError: Error {
        case cancelled
    }

    typealias Callback = (Result<T, Error>) -> Void

    override var isAsynchronous: Bool {
        return true
    }

    override var isExecuting: Bool {
        return self.started
    }

    override var isFinished: Bool {
        return self.result != nil
    }

    private var started = false
    private var operationBlock: (() -> Void)?
    private(set) var result: Result<T, Error>?

    init(_ callback: @escaping (CallbackOperation<T>) -> Void) {
        super.init()
        self.operationBlock = { [weak self] in
            self.map { callback($0) }
        }
    }

    override func start() {
        willChangeValue(forKey: #keyPath(isExecuting))
        self.started = true
        didChangeValue(forKey: #keyPath(isExecuting))

        guard !isCancelled else {
            self.finish(result: .failure(OperationError.cancelled))
            return
        }

        self.operationBlock?()
    }

    override func cancel() {
        super.cancel()
        self.finish(result: .failure(OperationError.cancelled))
    }

    func finish(result: Result<T, Error>) {
        guard self.started else {
            return
        }

        willChangeValue(forKey: #keyPath(isExecuting))
        willChangeValue(forKey: #keyPath(isFinished))

        self.started = false
        self.result = result

        didChangeValue(forKey: #keyPath(isFinished))
        didChangeValue(forKey: #keyPath(isExecuting))

        self.completionBlock?()
    }
}
