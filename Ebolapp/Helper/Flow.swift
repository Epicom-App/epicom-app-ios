//
//  Flow.swift
//  Created by Igor Tiukavkin on 07.10.20.
//  Copyright © 2020 AppsFactory. All rights reserved.
//

import Foundation
import CommonCode

enum FlowEvent<T> {
    case next(T)
    case error(Error)
    case completed
}

extension FlowEvent {
    func onNext(_ block: @escaping (T) -> Void) {
        guard case .next(let value) = self else {
            return
        }
        block(value)
    }
    func onError(_ block: @escaping (Error) -> Void) {
        guard case .error(let error) = self else {
            return
        }
        block(error)
    }
    func onComplete(_ block: @escaping () -> Void) {
        guard case .completed = self else {
            return
        }
        block()
    }
}

enum FlowError: Error {
    case incorrectValue
}

class FlowCollector<T>: Kotlinx_coroutines_coreFlowCollector {
    
    private let onNext: (T) -> Void
    
    init(onNext: @escaping (T) -> Void) {
        self.onNext = onNext
    }
    
    func emit(value: Any?, completionHandler: @escaping (KotlinUnit?, Error?) -> Void) {
        var error: Error?
        if let value = value as? T {
            self.onNext(value)
        } else {
            error = FlowError.incorrectValue
        }
        completionHandler(nil, error)
    }
}

extension Kotlinx_coroutines_coreFlow {
    
    func collect<T>(queue: DispatchQueue = .main, event: @escaping (FlowEvent<T>) -> Void) -> Disposable {
        let collector = FlowCollector { value in
            queue.async { event(.next(value)) }
        }
        self.collect(collector: collector, completionHandler: { _, error in
            queue.async {
                if let error = error {
                    event(.error(error))
                }
                event(.completed)
            }
        })
        return Disposable(flow: self, collector: collector)
    }
    
    func subscribe<T>(queue: DispatchQueue = .main,
                      onNext: @escaping (T) -> Void = { _ in },
                      onError: @escaping (Error) -> Void = { _ in },
                      onComplete: @escaping () -> Void = { }) -> Disposable {
        return self.collect(queue: queue) { (event: FlowEvent<T>) in
            event.onNext(onNext)
            event.onError(onError)
            event.onComplete(onComplete)
        }
    }
}

typealias DisposeBag = [Disposable]

struct Disposable {
    
    fileprivate let flow: Kotlinx_coroutines_coreFlow
    fileprivate let collector: AnyObject
    
    func disposed(by bag: inout DisposeBag) {
        bag.append(self)
    }
}

extension DisposeBag where Element == Disposable {

    mutating func dispose() {
        removeAll()
    }
}
