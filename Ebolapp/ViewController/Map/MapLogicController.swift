//
//  MapLogicController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 08.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import CoreLocation
import Reachability

protocol MapLogicControllerInput: class {
    func startUpdates()
    func didChangeDateOffset(offset: Int)
    func willChangeMapRegion()
    func didChangeMapPosition(box: MapRegionBoxModel)
    func didTapOnRegion(regionId: String)
}

protocol MapLogicControllerOutput: class {
    func update(polygons: [RiskAreaPolygon])
    func updateNotRiskyLocations(locations: [UserLocationAnnotationModel])
    func updateRiskyLocations(locations: [UserLocationAnnotationModel])
    func updateRiskDates(dates: [Date])
    func setupLoading(isLoading: Bool)
    func updateRegionInfo(info: MapRegionInfoModel?)
}

typealias MapServiceInput =
    GetMapRegionsInput &
    GetMapRegionInfoInput &
    GetNotRiskyVisitsInput &
    ObserveRiskMatchesForPeriodInput &
    GetRiskMatchesForDayInput

typealias MapServiceOutput =
    UpdateMapRegionsOutput &
    UpdateMapRegionInfoOutput &
    UpdateNotRiskyVisitsOutput &
    ObserveRiskDatesOffsetOutput &
    UpdateRiskMatchesForDayOutput &
    DidFailOutput

class MapLogicController {
    
    // Data
    private var dateOffset = 0
    private var riskDatesOffsets: [Int] = []
    
    private lazy var service = RiskAreaServiceFactory.createMapService(output: self)
    private weak var output: MapLogicControllerOutput?
    
    // Dependencies
    private let mapper: RiskAreaPolygonMapperProtocol = RiskAreaPolygonMapper()
    private let locationsManager: UserLocationManagerInterface = UserLocationManager.shared
    private let alertsHelper = AlertsHelperFactory.createMapAlertsHelper()
    
    // Properties
    private var today: Date { DateProvider.shared.today }
    private var box: MapRegionBoxModel?
    private let worker = Worker()
    private let reachability = try? Reachability()
    private var throttler: Throttler = Throttler()
    
    init(output: MapLogicControllerOutput) {
        self.output = output
    }
    
    private func loadData() {
        self.box.map { box in
            self.worker.performWork { [weak self] in
                self?.updateMapRegions(box: box)
                self?.updateLocations()
            }
        }
    }

    private func updateLocations() {
        Calendar.current.date(byAdding: .day, value: -self.dateOffset, to: self.today).map {
            self.output?.setupLoading(isLoading: true)
            self.service.getNotRiskyVisits(by: $0.timeIntervalSince1970)
            self.service.getRiskMatchesForDay(by: $0.timeIntervalSince1970)
        }
    }

    private func updateMapRegions(box: MapRegionBoxModel) {
        Calendar.current.date(byAdding: .day, value: -self.dateOffset, to: self.today).map {
            self.output?.setupLoading(isLoading: true)
            self.service.getMapRegions(box: box, timestamp: $0.timeIntervalSince1970)
        }
    }

    private func checkLocationPermissions() {
        guard ![.notDetermined, .authorizedAlways].contains(self.locationsManager.authorisationStatus) else {
            return
        }
        self.alertsHelper.showLocationDeniedAlert()
    }
}

// MARK: MapLogicControllerInput

extension MapLogicController: MapLogicControllerInput {

    func willChangeMapRegion() {
        self.service.cancelCurrentMapRegionsRequest()
    }

    func didChangeMapPosition(box: MapRegionBoxModel) {
        self.box = box
        self.loadData()
    }
    
    func startUpdates() {
        self.riskDatesOffsets = []
        self.loadData()
        self.checkLocationPermissions()
        self.service.observeRiskMatchesForPeriod(days: Constants.daysBeforeToday)
    }
    
    func didChangeDateOffset(offset: Int) {
        self.dateOffset = offset
        self.loadData()
    }

    func didTapOnRegion(regionId: String) {
        Calendar.current.date(byAdding: .day, value: -self.dateOffset, to: self.today).map { date in
            self.worker.performWork { [weak self] in
                self?.output?.setupLoading(isLoading: true)
                self?.service.getMapRegionInfo(regionId: regionId, timestamp: date.timeIntervalSince1970)
            }
        }
    }
}

// MARK: MapServiceOutput

extension MapLogicController: MapServiceOutput {

    func updateMapRegionInfo(mapRegionInfo: MapRegionInfoModel?) {
        self.output?.updateRegionInfo(info: mapRegionInfo)
        self.output?.setupLoading(isLoading: false)
    }

    func updateMapRegions(mapRegions: [MapRegionModel]) {
        let polygons = mapRegions.map(self.mapper.mapAPIToUIU)
        self.output?.update(polygons: polygons.reduce([], { $0 + $1 }))
        self.output?.setupLoading(isLoading: false)
    }

    func didCancelCurrentMapRegionsRequest() {
        self.output?.setupLoading(isLoading: false)
    }
    
    func updateNotRiskyVisits(visits: [VisitModel]) {
        let notRiskyLocations = visits.map { UserLocationAnnotationModel(visit: $0, isRisky: false) }
        self.output?.updateNotRiskyLocations(locations: notRiskyLocations)
        self.output?.setupLoading(isLoading: false)
    }

    func accumulateRiskDatesOffset(offset: Int) {
        self.riskDatesOffsets = (self.riskDatesOffsets + [offset]).distinct()
        self.throttler.throttle(0.5) { [weak self] in
            self?.updateLocations()
        }
        let exposedDates = self.riskDatesOffsets.map {
            self.today.addingTimeInterval(-(Double($0)*Constants.oneDayInterval))
        }
        self.output?.updateRiskDates(dates: exposedDates)
    }

    func updateRiskMatchesForDay(riskMatches: [RiskMatchModel]) {
        let riskyLocations = riskMatches.map { UserLocationAnnotationModel(visit: $0.visit, isRisky: true) }
        self.output?.updateRiskyLocations(locations: riskyLocations)
    }
    
    func didFailWithError(error: Error) {
        self.output?.setupLoading(isLoading: false)
        let errorType: ErrorAlertType = self.reachability?.connection == .unavailable ? .noInternet : .unknown
        self.alertsHelper.showErrorAlert(type: errorType) { [weak self] in
            self?.worker.repeatLastWork()
        }
    }
}
