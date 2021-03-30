//
//  VisitModel.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 20.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CoreLocation

struct VisitModel: Hashable {

    let id: Int
    let position: CLLocationCoordinate2D
    let startTimestamp: TimeInterval
    let endTimestamp: TimeInterval

    func hash(into hasher: inout Hasher) {
        hasher.combine(id)
    }

    static func == (lhs: VisitModel, rhs: VisitModel) -> Bool {
        return lhs.id == rhs.id
    }
}
