//
//  MapRegionModel.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 03.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import CoreLocation

struct MapRegionModel {
    let id: String
    let parentId: String?
    let color: UIColor
    let colorRaw: String
    let geoRings: [[CLLocationCoordinate2D]]
}
