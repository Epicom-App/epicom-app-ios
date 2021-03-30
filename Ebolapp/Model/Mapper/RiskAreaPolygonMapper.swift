//
//  RiskAreaPolygonMapper.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 12.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

protocol RiskAreaPolygonMapperProtocol {
    func mapAPIToUIU(model: MapRegionModel) -> [RiskAreaPolygon]
}

class RiskAreaPolygonMapper: RiskAreaPolygonMapperProtocol {
    
    func mapAPIToUIU(model: MapRegionModel) -> [RiskAreaPolygon] {
        let coordinates = model.geoRings.reduce([], { $0 + [$1] })
        return coordinates.map {
            let polygon = RiskAreaPolygon(coordinates: $0, count: $0.count)
            polygon.id = model.id
            polygon.parentId = model.parentId
            polygon.fillColor = model.color
            polygon.fillColorRaw = model.colorRaw
            polygon.strokeColor = Constants.Polygon.strokeColor
            polygon.lineWidth = Constants.Polygon.lineWidth
            polygon.coordinates = $0
            return polygon
        }
    }
}
