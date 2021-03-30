//
// Created by Igor Tiukavkin on 06.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

protocol WorkerInterface {
    func performWork(_ block: @escaping () -> Void)
    func repeatLastWork()
}

final class Worker: WorkerInterface {

    private var lastWork: (() -> Void)?

    func performWork(_ block: @escaping () -> Void) {
        self.lastWork = block
        block()
    }

    func repeatLastWork() {
        self.lastWork?()
    }
}
