//
// Created by Igor Tiukavkin on 16.02.21.
// Copyright (c) 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

struct MapRegionLegendModel {
    let name: String
    let items: [MapRegionLegendItemModel]
}

struct MapRegionLegendItemModel {
    let severity: Int
    let info: String
    let color: UIColor
    var isRisky: Bool
}
