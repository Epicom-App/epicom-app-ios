//
// Created by Igor Tiukavkin on 03.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import CommonCode

protocol MapRegionInfoMapperProtocol {
    func mapCommonToAPI(data: MapRegionInfo) -> MapRegionInfoModel
}

class MapRegionInfoMapper: MapRegionInfoMapperProtocol {
    func mapCommonToAPI(data: MapRegionInfo) -> MapRegionInfoModel {
        return MapRegionInfoModel(
            id: data.id,
            name: data.name,
            severity: "\(data.severity)",
            maxSeverity: "\(data.maxSeverity)",
            severityInfo: data.severityInfo,
            colorRaw: data.color,
            casesNumber: Int(data.casesNumber),
            casesNumberInfo: data.casesNumberInfo,
            disease: data.disease,
            infoLink: data.informationUrl
        )
    }
}
