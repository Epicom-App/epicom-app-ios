//
//  Result+Extensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 21.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation

extension Result {

    var result: Success? {
        switch self {
        case .success(let result):
            return result
        default:
            return nil
        }
    }

    var error: Failure? {
        switch self {
        case .failure(let failure):
            return failure
        default:
            return nil
        }
    }
}
