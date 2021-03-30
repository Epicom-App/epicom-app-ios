//
//  UserLocationModel.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 15.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CoreLocation

struct UserLocationModel {
    let timestamp: TimeInterval
    let position: CLLocationCoordinate2D
}
