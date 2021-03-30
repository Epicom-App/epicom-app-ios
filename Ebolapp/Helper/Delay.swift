//
// Created by Igor Tiukavkin on 22.10.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

func delay(_ delay: TimeInterval, closure:@escaping () -> Void) {

    DispatchQueue.main.asyncAfter(
        deadline: DispatchTime.now() + Double(Int64(delay * Double(NSEC_PER_SEC))) / Double(NSEC_PER_SEC), execute: closure)
}
