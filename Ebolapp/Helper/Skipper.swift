//
//  Skipper.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 20.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation

final class Skipper {

    private var skipCount: UInt = 0

    func skip(_ count: UInt, perform: () -> Void) {
        defer {
            self.skipCount += 1
        }
        guard count <= self.skipCount else {
            return
        }
        perform()
    }
}
