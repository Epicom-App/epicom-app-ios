//
// Created by Igor Tiukavkin on 09.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CoreLocation

struct RiskMatchModel: Hashable {
    let regionId: String
    let visit: VisitModel
    let severity: Int
    let dayStartTimestampSec: TimeInterval

    func hash(into hasher: inout Hasher) {
        hasher.combine(self.regionId)
        hasher.combine(self.visit)
        hasher.combine(self.dayStartTimestampSec)
    }

    static func == (lhs: RiskMatchModel, rhs: RiskMatchModel) -> Bool {
        return lhs.regionId == rhs.regionId &&
               lhs.dayStartTimestampSec == rhs.dayStartTimestampSec &&
               lhs.visit == rhs.visit
    }
}
