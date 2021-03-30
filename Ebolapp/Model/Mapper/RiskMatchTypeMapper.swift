//
//  RiskMatchTypeMapper.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 05.03.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CommonCode

protocol RiskMatchTypeMapperProtocol {
    func mapCommonToAPI(data: CommonCode.RiskMatchType) -> RiskMatchType
}

class RiskMatchTypeMapper: RiskMatchTypeMapperProtocol {

    func mapCommonToAPI(data: CommonCode.RiskMatchType) -> RiskMatchType {
        switch data {
        case .regionChange:
            return .regionChange
        case .severityIncrease:
            return .severityIncrease
        case .remain:
            return .remain
        default:
            return .unknown
        }
    }
}
