//
//  RiskAreasService.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 09.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CommonCode

// Input

protocol GetMapRegionsInput: class {
    func getMapRegions(box: MapRegionBoxModel, timestamp: TimeInterval)
    func cancelCurrentMapRegionsRequest()
}
protocol GetMapRegionInfoInput: class {
    func getMapRegionInfo(regionId: String, timestamp: TimeInterval)
}
protocol GetNotRiskyVisitsInput: class {
    func getNotRiskyVisits(by timestamp: TimeInterval)
}
protocol GetRiskMatchesForDayInput: class {
    func getRiskMatchesForDay(by timestamp: TimeInterval)
}
protocol ObserveRiskMatchesForPeriodInput: class {
    func observeRiskMatchesForPeriod(days: Int)
}
protocol GetRiskMatchesForPeriodInput: class {
    func getRiskMatchesForPeriod(days: Int)
}
protocol GetLegendInput: class {
    func getLegend()
}

// Output

protocol UpdateNotRiskyVisitsOutput: class {
    func updateNotRiskyVisits(visits: [VisitModel])
}
protocol UpdateMapRegionsOutput: class {
    func updateMapRegions(mapRegions: [MapRegionModel])
    func didCancelCurrentMapRegionsRequest()
}
protocol UpdateMapRegionInfoOutput: class {
    func updateMapRegionInfo(mapRegionInfo: MapRegionInfoModel?)
}
protocol UpdateRiskMatchesOutput: class {
    func updateRiskMatches(riskMatches: [RiskMatchModel])
}
protocol ObserveRiskDatesOffsetOutput: class {
    func accumulateRiskDatesOffset(offset: Int)
}
protocol DidFailOutput: class {
    func didFailWithError(error: Error)
}
protocol UpdateLegendOutput: class {
    func updateLegend(legend: MapRegionLegendModel)
}
protocol UpdateRiskMatchesForDayOutput: class {
    func updateRiskMatchesForDay(riskMatches: [RiskMatchModel])
}

typealias RiskAreasServiceInput =
    GetNotRiskyVisitsInput &
    GetMapRegionsInput &
    GetMapRegionInfoInput &
    ObserveRiskMatchesForPeriodInput &
    GetRiskMatchesForPeriodInput &
    GetLegendInput &
    GetRiskMatchesForDayInput

typealias RiskAreasServiceOutput =
    UpdateNotRiskyVisitsOutput &
    UpdateMapRegionsOutput &
    UpdateMapRegionInfoOutput &
    ObserveRiskDatesOffsetOutput &
    UpdateRiskMatchesOutput &
    UpdateLegendOutput &
    UpdateRiskMatchesForDayOutput &
    DidFailOutput

class RiskAreasService: RiskAreasServiceInput {

    enum Error: Swift.Error {
        case unknown
    }
    
    // Factories
    private let visitsFactory = VisitsUseCaseFactory(databaseWrapper: CommonCodeDependencies.database)
    private let mapRegionsFactory = MapRegionsUseCaseFactory(databaseWrapper: CommonCodeDependencies.database, endpoints: API.endpoints)
    private let mapCasesFactory = MapRegionsCasesUseCaseFactory(endpoints: API.endpoints, databaseWrapper: CommonCodeDependencies.database)
    private let riskMatchesFactory = RiskMatchingUseCaseFactory(databaseWrapper: CommonCodeDependencies.database, endpoints: API.endpoints)

    // UseCases
    private lazy var getUserLocationsUseCase  = self.riskMatchesFactory.createGetNotRiskyVisitsForDayUseCase()
    private lazy var getMapRegionsUseCase = self.mapRegionsFactory.createGetMapRegionsWithGeometryUseCase()
    private lazy var getMapRegionInfoUseCase = self.mapRegionsFactory.createGetMapRegionInfoUseCase()
    private lazy var observeRiskDatesOffsetUseCase = self.riskMatchesFactory.createObserveRiskDatesOffsetsFromCurrentDateForPeriod()
    private lazy var getRiskMatchesUseCase = self.riskMatchesFactory.createGetRiskMatchesForPeriodUseCase()
    private lazy var getLegendUseCase = self.mapCasesFactory.createGetLegendUseCase()
    private lazy var getRiskMatchesForDayUseCase = self.riskMatchesFactory.createGetRiskMatchesForDayUseCase()

    // Mappers
    private let mapRegionBoxMapper: MapRegionBoxMapperProtocol = MapRegionBoxMapper()
    private let mapRegionMapper: MapRegionMapperProtocol = MapRegionMapper()
    private let mapRegionInfoMapper: MapRegionInfoMapperProtocol = MapRegionInfoMapper()
    private let polygonsMapper: RiskAreaPolygonMapperProtocol = RiskAreaPolygonMapper()
    private let visitMapper: VisitMapperProtocol = VisitMapper()
    private let riskMatchMapper: RiskMatchMapperProtocol = RiskMatchMapper(visitMapper: VisitMapper())
    private let legendMapper: MapRegionLegendMapperProtocol = MapRegionLegendMapper()

    private weak var observeRiskMatchesJob: Kotlinx_coroutines_coreJob?
    private weak var currentGetMapRegionsJob: Kotlinx_coroutines_coreJob?
    private weak var output: AnyObject?
    
    init(output: AnyObject) {
        self.output = output
    }

    func getNotRiskyVisits(by timestamp: TimeInterval) {
        self.getUserLocationsUseCase.invoke(timestampSec: Int64(timestamp)) { [weak self] (visits, error) in
            guard let self = self else {
                return
            }
            if let visits = visits {
                let visits = visits.map(self.visitMapper.mapCommonToAPI)
                (self.output as? UpdateNotRiskyVisitsOutput)?.updateNotRiskyVisits(visits: visits)
            } else if let error = error {
                (self.output as? DidFailOutput)?.didFailWithError(error: error)
            }
        }
    }

    func cancelCurrentMapRegionsRequest() {
        self.currentGetMapRegionsJob?.cancel(cause: .none)
        (self.output as? UpdateMapRegionsOutput)?.didCancelCurrentMapRegionsRequest()
    }

    func getMapRegions(box: MapRegionBoxModel, timestamp: TimeInterval) {
        self.currentGetMapRegionsJob = self.getMapRegionsUseCase.getMapRegions(
            mapRegionBox: mapRegionBoxMapper.mapAPIToCommon(data: box),
            timestampSec: Int64(timestamp),
            onResult: { [weak self] (regions) in
                guard let self = self else {
                    return
                }
                let regions = regions.map(self.mapRegionMapper.mapCommonToAPI)
                (self.output as? UpdateMapRegionsOutput)?.updateMapRegions(mapRegions: regions)
            }, onError: { [weak self] error in
                LOG.E(error.message)
                (self?.output as? DidFailOutput)?.didFailWithError(error: Error.unknown)
            })
    }

    func getMapRegionInfo(regionId: String, timestamp: TimeInterval) {
        self.getMapRegionInfoUseCase.invoke(regionId: regionId, timestampSec: Int64(timestamp)) { [weak self] info, error in
            guard let self = self else {
                return
            }
            if let error = error {
                (self.output as? DidFailOutput)?.didFailWithError(error: error)
            } else {
                let info = info.map { self.mapRegionInfoMapper.mapCommonToAPI(data: $0) }
                (self.output as? UpdateMapRegionInfoOutput)?.updateMapRegionInfo(mapRegionInfo: info)
            }
        }
    }

    func observeRiskMatchesForPeriod(days: Int) {
        self.observeRiskMatchesJob?.cancel(cause: .none)
        self.observeRiskMatchesJob = self.observeRiskDatesOffsetUseCase.observe(days: Int32(days)) { [weak self] offset in
            DispatchQueue.main.async {
                guard let self = self else {
                    return
                }
                (self.output as? ObserveRiskDatesOffsetOutput)?.accumulateRiskDatesOffset(offset: offset.intValue)
            }
        }
    }

    func getRiskMatchesForPeriod(days: Int) {
        self.getRiskMatchesUseCase.invoke(daysPeriod: Int32(days)) { [weak self] riskMatches, error in
            guard let self = self else {
                return
            }
            if let error = error {
                (self.output as? DidFailOutput)?.didFailWithError(error: error)
            } else {
                let matches = (riskMatches ?? []).map(self.riskMatchMapper.mapCommonToAPI)
                (self.output as? UpdateRiskMatchesOutput)?.updateRiskMatches(riskMatches: matches)
            }
        }
    }

    func getLegend() {
        self.getLegendUseCase.invoke { [weak self] legend, error in
            guard let self = self else {
                return
            }
            if let legend = legend.map(self.legendMapper.mapCommonToAPI) {
                (self.output as? UpdateLegendOutput)?.updateLegend(legend: legend)
            } else {
                (self.output as? DidFailOutput)?.didFailWithError(error: error ?? Error.unknown)
            }
        }
    }

    func getRiskMatchesForDay(by timestamp: TimeInterval) {
        self.getRiskMatchesForDayUseCase.invoke(timestampSec: Int64(timestamp)) { [weak self] (riskMatches, error) in
            guard let self = self else {
                return
            }
            if let error = error {
                (self.output as? DidFailOutput)?.didFailWithError(error: error)
            } else {
                let matches = (riskMatches ?? []).map(self.riskMatchMapper.mapCommonToAPI)
                (self.output as? UpdateRiskMatchesForDayOutput)?.updateRiskMatchesForDay(riskMatches: matches)
            }
        }
    }
}
