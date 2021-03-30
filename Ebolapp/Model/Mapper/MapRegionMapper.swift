//
// Created by Igor Tiukavkin on 03.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import CoreLocation
import CommonCode
import UIColor_Hex_Swift

protocol MapRegionMapperProtocol {
    func mapCommonToAPI(data: MapRegionWithGeometry) -> MapRegionModel
}

class MapRegionMapper: MapRegionMapperProtocol {
    func mapCommonToAPI(data: MapRegionWithGeometry) -> MapRegionModel {
        return MapRegionModel(
            id: data.id,
            parentId: data.parentId,
            color: UIColor(data.color),
            colorRaw: data.color,
            geoRings: data.geoRings.map { $0.map { CLLocationCoordinate2D(latitude: $0.lat, longitude: $0.lon) } }
        )
    }
}
