//
//  RiskAreaServiceFactory.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 19.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

enum RiskAreaServiceFactory {

    static func createMapService(output: MapServiceOutput) -> MapServiceInput {
        return RiskAreasService(output: output)
    }

    static func createGetRegionInfo(output: UpdateMapRegionInfoOutput) -> GetMapRegionInfoInput {
        return RiskAreasService(output: output)
    }

    static func createGetRiskMatches(output: UpdateRiskMatchesOutput) -> GetRiskMatchesForPeriodInput {
        return RiskAreasService(output: output)
    }

    static func createGetLegend(output: UpdateLegendOutput) -> GetLegendInput {
        return RiskAreasService(output: output)
    }
}
