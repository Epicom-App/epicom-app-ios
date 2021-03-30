//
//  Configurator.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 10.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation

struct Configurator<T> {

    private var value: T

    init(_ value: T) {
        self.value = value
    }

    func configure(_ block: (T) -> Void) -> T {
        block(self.value)
        return self.value
    }
}
