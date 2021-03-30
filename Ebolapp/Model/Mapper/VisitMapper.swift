//
//  VisitMapper.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 20.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CoreLocation
import CommonCode

protocol VisitMapperProtocol {
    func mapCommonToAPI(data: Visit) -> VisitModel
}

class VisitMapper: VisitMapperProtocol {

    func mapCommonToAPI(data: Visit) -> VisitModel {
        return VisitModel(
            id: Int(data.id),
            position: CLLocationCoordinate2D(latitude: data.position.lat, longitude: data.position.lon),
            startTimestamp: TimeInterval(data.startTimestamp),
            endTimestamp: TimeInterval(data.endTimestamp)
        )
    }
}
