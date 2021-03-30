//
// Created by Igor Tiukavkin on 03.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CommonCode
import CoreLocation

protocol MapRegionBoxMapperProtocol {
    func mapCommonToAPI(data: MapRegionBox) -> MapRegionBoxModel
    func mapAPIToCommon(data: MapRegionBoxModel) -> MapRegionBox
}

class MapRegionBoxMapper: MapRegionBoxMapperProtocol {

    func mapCommonToAPI(data: MapRegionBox) -> MapRegionBoxModel {
        return MapRegionBoxModel(
            topLeft: CLLocationCoordinate2D(latitude: data.topLeft.lat, longitude: data.topLeft.lon),
            bottomRight: CLLocationCoordinate2D(latitude: data.bottomRight.lat, longitude: data.bottomRight.lon)
        )
    }

    func mapAPIToCommon(data: MapRegionBoxModel) -> MapRegionBox {
        return MapRegionBox(
            topLeft: Position(lat: data.topLeft.latitude, lon: data.topLeft.longitude),
            bottomRight: Position(lat: data.bottomRight.latitude, lon: data.bottomRight.longitude)
        )
    }
}
