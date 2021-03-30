//
// Created by Igor Tiukavkin on 27.10.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

final class Distincter<Value: Equatable> {

    private var previousValue: Value?

    func distinct(value: Value, block: () -> Void) {
        guard value != previousValue else {
            return
        }
        self.previousValue = value
        block()
    }
}
