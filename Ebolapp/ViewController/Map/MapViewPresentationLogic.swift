//
// Created by Igor Tiukavkin on 23.10.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import MapKit

protocol MapViewOutput: class {
    func didLoad()
    func didTapLocationButton()
    func didTapShowCalendar()
    func didTapHideCalendar()
    func didTapOnPolygon(polygon: MKPolygon)
    func didInteractWithMap()
    func willChangeMapRegionAnimated()
    func didChangeMapPosition(box: MapRegionBoxModel)
    func didChangeDaysOffset(offset: Int)
    func didSelectAnnotationView(view: MKAnnotationView)
    func didGetDrawingError(box: MapRegionBoxModel)
}

protocol MapViewInput: class {
    func deselectCurrentPolygon()
    func deselectLocationButton()
    func selectLocationButton()
    func deselectCalendarButton()
    func selectCalendarButton()
    func showMapInfoLoading(isLoading: Bool)
    func showMapInfo(info: MapRegionInfoModel)
    func hideCurrentMapInfo()
    func showCalendar(offset: Int)
    func hideCalendar()
    func showCurrentUserLocation()
    func selectPolygon(id: String, hasParent: Bool)
    func deselectAllAnnotations()
    func selectAnnotation(annotation: MKAnnotation)
    func selectAnnotationView(view: MKAnnotationView)
    func updateDatesSlider(riskDates: [Date])
    func update(polygons: [RiskAreaPolygon])
    func updateNotRiskyLoactions(locations: [UserLocationAnnotationModel])
    func updateRiskyLocations(locations: [UserLocationAnnotationModel])
    func setupLoading(isLoading: Bool)
    func showDateAnnotation(date: Date)
    func hideDateAnnotation()
    func updateBadge(value: Int)
    func zoomToCoordinates(coordinates: [CLLocationCoordinate2D], animated: Bool)
}

final class MapViewPresentationLogic: MapViewOutput {

    struct Constants {
        static let updateNotRiskyLocationsKey = "updateNotRiskyLocations"
        static let updateRiskyLocationsKey = "updateRiskyLocations"
    }

    struct Cache {
        var selectedPolygon: RiskAreaPolygon?
        var mapInfo: MapRegionInfoModel?
        var daysOffset = 0
        var isToday: Bool { self.daysOffset == 0 }
        var riskDates: [Date] = []
    }

    private weak var view: MapViewInput?
    private lazy var logicController = MapLogicController(output: self)
    private let alertsHelper = AlertsHelperFactory.createMapAlertsHelper()
    private var cache = Cache()
    private let waiter = Waiter<[CLLocationCoordinate2D]>(maxWaitTime: 5.0)

    init(view: MapViewInput) {
        self.view = view
    }

    func didLoad() {
        self.logicController.startUpdates()
        self.view?.hideDateAnnotation()
    }

    func didTapLocationButton() {
        self.view?.showCurrentUserLocation()
        self.deselectCurrentPolygon()
        self.view?.selectLocationButton()
    }

    func didTapShowCalendar() {
        self.deselectCurrentPolygon()
        self.view?.showCalendar(offset: self.cache.daysOffset)
        self.selectCalendarButton()
        self.view?.updateDatesSlider(riskDates: self.cache.riskDates)
    }

    func didTapHideCalendar() {
        self.hideCalendar()
    }

    func didTapOnPolygon(polygon: MKPolygon) {
        guard let areaPolygon = polygon as? RiskAreaPolygon else {
            return
        }
        self.cache.selectedPolygon = areaPolygon
        self.view?.showMapInfoLoading(isLoading: true)
        self.logicController.didTapOnRegion(regionId: areaPolygon.id)
    }

    func didInteractWithMap() {
        self.logicController.willChangeMapRegion()
        self.deselectCurrentPolygon()
        self.view?.deselectLocationButton()
        self.view?.deselectAllAnnotations()
    }

    func willChangeMapRegionAnimated() {
        self.logicController.willChangeMapRegion()
        self.view?.deselectAllAnnotations()
    }

    func didChangeMapPosition(box: MapRegionBoxModel) {
        self.logicController.didChangeMapPosition(box: box)
    }

    func didChangeDaysOffset(offset: Int) {
        self.waitForLocationsUpdates()
        self.cache.daysOffset = offset
        self.logicController.didChangeDateOffset(offset: offset)
        self.showDateAnnotation()
    }

    func didSelectAnnotationView(view: MKAnnotationView) {
        self.view?.selectAnnotationView(view: view)
    }
}

// MARK: - Private

extension MapViewPresentationLogic {

    private func waitForLocationsUpdates() {
        self.waiter.wait(for: [Constants.updateNotRiskyLocationsKey, Constants.updateRiskyLocationsKey]) { [weak self] result in
            guard let coordinates = result.result?.reduce([], { $0 + $1 }) else {
                return
            }
            self?.view?.zoomToCoordinates(coordinates: coordinates, animated: true)
        }
    }

    private func selectCurrentPolygon() {
        self.cache.selectedPolygon.map { self.view?.selectPolygon(id: $0.id, hasParent: $0.parentId != nil) }
    }

    private func deselectCurrentPolygon() {
        self.cache.mapInfo = nil
        self.cache.selectedPolygon = nil
        self.view?.deselectCurrentPolygon()
    }

    private func hideCalendar() {
        self.view?.hideCalendar()
        if self.cache.isToday {
            self.deselectCalendarButton()
        }
    }

    private func selectCalendarButton() {
        self.view?.selectCalendarButton()
        self.showDateAnnotation()
    }

    private func deselectCalendarButton() {
        self.view?.deselectCalendarButton()
        self.view?.hideDateAnnotation()
    }

    private func showDateAnnotation() {
        let today = DateProvider.shared.today
        let offset = self.cache.daysOffset
        let date = MapDateFormatter.shared.dateFrom(today, withOffset: -offset)
        self.view?.showDateAnnotation(date: date)
    }

    private func updateBadge() {
        self.view?.updateBadge(value: self.cache.riskDates.distinct().count)
    }
}

// MARK: - MapLogicControllerOutput

extension MapViewPresentationLogic: MapLogicControllerOutput {

    func update(polygons: [RiskAreaPolygon]) {
        self.view?.update(polygons: polygons)
        self.selectCurrentPolygon()
    }

    func updateNotRiskyLocations(locations: [UserLocationAnnotationModel]) {
        self.view?.updateNotRiskyLoactions(locations: locations)
        self.waiter.serve(value: locations.map { $0.coordinate }, for: Constants.updateNotRiskyLocationsKey)
    }

    func updateRiskyLocations(locations: [UserLocationAnnotationModel]) {
        self.view?.updateRiskyLocations(locations: locations)
        self.waiter.serve(value: locations.map { $0.coordinate }, for: Constants.updateRiskyLocationsKey)
    }

    func updateRiskDates(dates: [Date]) {
        self.cache.riskDates = dates
        self.view?.updateDatesSlider(riskDates: dates)
        self.updateBadge()
    }

    func setupLoading(isLoading: Bool) {
        self.view?.setupLoading(isLoading: isLoading)
    }

    func updateRegionInfo(info: MapRegionInfoModel?) {
        self.cache.mapInfo = info
        if let info = info {
            self.view?.deselectLocationButton()
            if self.cache.isToday {
                self.deselectCalendarButton()
            }
            self.view?.hideCalendar()
            self.selectCurrentPolygon()
            self.view?.showMapInfo(info: info)
            self.view?.showMapInfoLoading(isLoading: false)
            self.view?.deselectLocationButton()
        } else {
            self.deselectCurrentPolygon()
        }
    }

    func didGetDrawingError(box: MapRegionBoxModel) {
        self.alertsHelper.showErrorAlert(type: .unknown) { [weak self] in
            self?.logicController.didChangeMapPosition(box: box)
        }
    }
}
