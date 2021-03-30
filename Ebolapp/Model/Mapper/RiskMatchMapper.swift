//
// Created by Igor Tiukavkin on 09.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CoreLocation
import CommonCode

protocol RiskMatchMapperProtocol {
    func mapCommonToAPI(data: RiskMatch) -> RiskMatchModel
}

class RiskMatchMapper: RiskMatchMapperProtocol {

    private let visitMapper: VisitMapperProtocol

    init(visitMapper: VisitMapperProtocol) {
        self.visitMapper = visitMapper
    }

    func mapCommonToAPI(data: RiskMatch) -> RiskMatchModel {
        return RiskMatchModel(
            regionId: data.regionId,
            visit: self.visitMapper.mapCommonToAPI(data: data.visit),
            severity: Int(data.severity),
            dayStartTimestampSec: TimeInterval(data.dayStartTimestampSec)
        )
    }
}
