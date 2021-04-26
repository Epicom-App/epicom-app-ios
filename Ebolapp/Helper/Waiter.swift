//
// Created by Igor Tiukavkin on 16.03.21.
// Copyright (c) 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation

public protocol WaiterInterface {
    /// Value type
    associatedtype Value

    /// Waits for execution `serve` with defined `key`
    ///
    /// - Parameters:
    ///   - key: identifier of request
    ///   - onComplete: result provided by `serve` for defined `key` or `WaitError`
    ///
    func wait(for key: String, onComplete: @escaping (Result<Value, Error>) -> Void)
    /// Waits for execution `serve` with all defined `keys`
    ///
    /// - Parameters:
    ///   - keys: array of identifiers of all requests
    ///   - onComplete: results provided by each `serve` for all defined `keys` provided in Array or `WaitError`
    func wait(for keys: [String], onComplete: @escaping (Result<[Value], Error>) -> Void)

    /// Provide `value` for some predefined `key`
    ///
    /// - Parameters:
    ///   - value: any possible value
    ///   - key: the `key` specified in `wait` method
    func serve(value: Value, for key: String)
}

public class Waiter<Value>: WaiterInterface {

    enum WaitError: Error {
        case cancel
        case outOfTime
        case invalid
    }

    private var expectation: Set<String> = Set()
    private var completed: Set<String> = Set()
    private var onComplete: ((Result<[Value], Error>) -> Void)?
    private var result: [Value] = []

    private let maxWaitTime: TimeInterval
    private var timer: Timer?

    deinit {
        self.cancel(silent: true)
    }

    public init(maxWaitTime: TimeInterval) {
        self.maxWaitTime = maxWaitTime
    }

    public func wait(for key: String, onComplete: @escaping (Result<Value, Error>) -> Void) {
        self.wait(for: [key]) { (result: Result<[Value], Error>) in
            if let result = result.result?.first {
                onComplete(.success(result))
            } else if let error = result.error {
                onComplete(.failure(error))
            } else {
                onComplete(.failure(WaitError.invalid))
            }
        }
    }

    public func wait(for keys: [String], onComplete: @escaping (Result<[Value], Error>) -> Void) {
        self.cancel()
        guard keys.count > 0 else {
            return
        }
        self.expectation = Set(keys)
        self.onComplete = onComplete
        self.timer = Timer.scheduledTimer(withTimeInterval: self.maxWaitTime, repeats: false) { [weak self] _ in
            self?.outOfTime()
        }
    }

    public func serve(value: Value, for key: String) {
        guard self.expectation.count > 0 else {
            return
        }
        self.result.append(value)
        self.completed.insert(key)
        if self.expectation == self.completed {
            self.complete()
        }
    }

    // MARK: - Private

    private func cancel(silent: Bool = false) {
        defer {
            self.result = []
            self.expectation = []
            self.completed = []
            self.onComplete = nil
        }
        self.timer?.invalidate()
        self.timer = nil
        if !silent {
            self.onComplete?(.failure(WaitError.cancel))
        }
    }

    private func outOfTime() {
        self.onComplete?(.failure(WaitError.outOfTime))
        self.cancel(silent: true)
    }

    private func complete() {
        self.onComplete?(.success(self.result))
        self.cancel(silent: true)
    }
}

extension Waiter where Value == Void {

    func serve(for key: String) {
        self.serve(value: (), for: key)
    }
}
