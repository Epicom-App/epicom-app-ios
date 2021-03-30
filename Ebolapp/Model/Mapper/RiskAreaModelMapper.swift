//
//  RiskAreaModelMapper.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 12.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CoreLocation
import CommonCode

protocol RiskAreaModelMapperProtocol {
    func mapCommonToAPI(data: RiskArea) -> RiskAreaModel
}

class RiskAreaMapper: RiskAreaModelMapperProtocol {
    
    func mapCommonToAPI(data: RiskArea) -> RiskAreaModel {
        return RiskAreaModel(
            id: data.areaID,
            bundeslandId: data.bundeslandID,
            name: data.areaName,
            coordinates: data.geoRing.map { $0.map { CLLocationCoordinate2D(latitude: $0.lat, longitude: $0.lon) } }
        )
    }
}
