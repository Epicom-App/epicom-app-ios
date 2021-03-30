//
// Created by Igor Tiukavkin on 16.02.21.
// Copyright (c) 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit
import UIColor_Hex_Swift
import CommonCode

protocol MapRegionLegendMapperProtocol {
    func mapCommonToAPI(data: MapRegionLegend) -> MapRegionLegendModel
}

protocol MapRegionLegendItemMapperProtocol {
    func mapCommonToAPI(data: MapRegionLegendItem) -> MapRegionLegendItemModel
}

class MapRegionLegendMapper: MapRegionLegendMapperProtocol, MapRegionLegendItemMapperProtocol {

    func mapCommonToAPI(data: MapRegionLegend) -> MapRegionLegendModel {
        return MapRegionLegendModel(
            name: data.name,
            items: data.items.map(self.mapCommonToAPI)
        )
    }

    func mapCommonToAPI(data: MapRegionLegendItem) -> MapRegionLegendItemModel {
        return MapRegionLegendItemModel(
            severity: Int(data.severity),
            info: data.info,
            color: UIColor(data.color),
            isRisky: data.isRisky
        )
    }
}
