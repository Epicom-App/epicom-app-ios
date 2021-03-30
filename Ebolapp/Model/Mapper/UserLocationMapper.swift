//
//  UserLocationMapper.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 15.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CoreLocation
import CommonCode

protocol UserLocationMapperProtocol {
    func mapCommonToAPI(data: UserLocation) -> UserLocationModel
}

class UserLocationMapper: UserLocationMapperProtocol {

    func mapCommonToAPI(data: UserLocation) -> UserLocationModel {
        return UserLocationModel(
            timestamp: TimeInterval(data.timestampSec),
            position: CLLocationCoordinate2D(
                latitude: data.position.lat,
                longitude: data.position.lon
            )
        )
    }
}
