//
//  Created by Appsfactory GmbH
//  Copyright © 2020 Appsfactory GmbH. All rights reserved.
//

import UIKit
import MapKit

class MapViewController: BaseViewController {
    
    private struct Constant {
        static let defaultOffset = UIEdgeInsets(top: 0.0, left: 12.0, bottom: 32.0, right: 12.0)
        static let userLocationZoom = MKCoordinateSpan(latitudeDelta: 0.1, longitudeDelta: 0.1)
        static let stateZoom = MKCoordinateSpan(latitudeDelta: 3.5, longitudeDelta: 3.5)
        static let regionZoom = MKCoordinateSpan(latitudeDelta: 1.5, longitudeDelta: 1.5)
        static let kLocationUpdate = "locationUpdateKey"
    }

    @IBOutlet private weak var locationButton: UIButton!
    @IBOutlet private weak var calendarButton: UIButton!
    @IBOutlet private weak var dateAnnotationView: MapDateAnnotationView!
    @IBOutlet private weak var controlsBottomConstraint: NSLayoutConstraint!
    
    private let mapView = MKMapView()
    private lazy var polygonSelector: PolygonSelectorInterface = PolygonSelector()
    private lazy var presentationLogic: MapViewOutput = MapViewPresentationLogic(view: self)
    
    private var mapInfoView: MapRegionInfoView?
    private var mapDatesSlider: MapDatesSlider?
    private var animator: ViewAnimator?
    private var locationUpdateWaiter = Waiter<Void>(maxWaitTime: 1.0)

	// MARK: - Life cycle
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.setupTabBarItem(item: .map)
    }
	
	override func viewDidLoad() {
		super.viewDidLoad()
        self.setupMap()
        self.setupMapButtons()
        self.setupNavigation()
        self.presentationLogic.didLoad()
	}
    
    // MARK: - Setup
    
    private func setupMap() {
        self.mapView.delegate = self
        self.view.insertSubview(self.mapView, at: 0)
        self.mapView.bindToSuperview()
        let tapGesture = UITapGestureRecognizer(target: self, action: #selector(self.didTapOnMap(nizer:)))
        self.mapView.addGestureRecognizer(tapGesture)
        self.mapView.showsUserLocation = true
        self.mapView.setUserTrackingMode(.follow, animated: true)
        
        let centerArea = MKCoordinateRegion(
            center: Constants.initialMapCenter,
            latitudinalMeters: Constants.initialLatitudinalMeters,
            longitudinalMeters: Constants.initialLongitudinalMeters
        )
        
        self.mapView.setRegion(centerArea, animated: false)
    }
    
    private func setupMapButtons() {
        self.calendarButton.accessibilityLabel = L10n.Localizable.contentDescriptionCalendarButton
        self.locationButton.accessibilityLabel = L10n.Localizable.contentDescriptionLocationButton
    }

    // MARK: - Navigation

    private func setupNavigation() {
        let items = [self.createSettingsItem(), self.createDebugModeItem()].compactMap { $0 }
        self.navigationItem.rightBarButtonItems = items
        self.navigationItem.largeTitleDisplayMode = .never
    }

    private func createSettingsItem() -> UIBarButtonItem {
        return HandlerBarButtonItem(
            image: Asset.iconSettings.image,
            accessibilityLabel: L10n.Localizable.contentDescriptionSettingsButton
        ) { [weak self] in
            let vc = StoryboardScene.Main.settingsViewController.instantiate()
            self?.navigationController?.pushViewController(vc, animated: true)
        }
    }

    private func createDebugModeItem() -> UIBarButtonItem? {
        guard [.debug, .adHoc, .enterprise].contains(BuildConfiguration.current) else {
            return nil
        }
        return HandlerBarButtonItem(image: Asset.icBugOutline.image) { [weak self] in
            let vc = DebugViewController()
            self?.navigationController?.pushViewController(vc, animated: true)
        }
    }
    
    // MARK: - Actions
    
    @objc private func didTapOnMap(nizer: UIGestureRecognizer) {
        guard nizer.state == .recognized else {
            return
        }
        let point = nizer.location(in: self.mapView)
        guard let polygon = self.polygonSelector.didTap(on: self.mapView, with: point) else {
            return
        }
        self.presentationLogic.didTapOnPolygon(polygon: polygon)
    }
    
    private func userDidInteractWithMap() {
        self.presentationLogic.didInteractWithMap()
    }

    @IBAction private func didTapOnButton(sender: UIButton) {
        switch sender {
        case self.locationButton:
            self.presentationLogic.didTapLocationButton()
        case self.calendarButton:
            if self.mapDatesSlider == nil {
                self.presentationLogic.didTapShowCalendar()
            } else {
                self.presentationLogic.didTapHideCalendar()
            }
        default:
            break
        }
    }
    
    // MARK: - Map Info

    private func showMapInfoView(info: MapRegionInfoModel) {
        let view = MapRegionInfoView()
        view.output = self
        view.update(viewModel: .init(info: info))
        self.animator = ViewAnimator(view: view, movingConstraint: self.controlsBottomConstraint)
        self.animator?.show(in: self.view, insets: Constant.defaultOffset)
        self.mapInfoView = view
        UIAccessibility.post(notification: .screenChanged, argument: view)
    }

    private func updateMapInfoView(info: MapRegionInfoModel) {
        self.mapInfoView?.update(viewModel: .init(info: info))
    }
    
    private func removeMapInfo() {
        self.mapInfoView.map { _ in
            self.animator?.remove()
            self.animator = nil
            self.mapInfoView = nil
        }
    }

    // MARK: - Dates slider

    private func showDatesSlider(offset: Int) {
        self.removeMapInfo()
        let slider = MapDatesSlider()
        slider.configure(viewModel: .init(daysBackFromToday: Constants.daysBeforeToday, offset: offset))
        slider.delegate = self
        self.animator = ViewAnimator(view: slider, movingConstraint: self.controlsBottomConstraint)
        self.animator?.show(in: self.view, insets: Constant.defaultOffset)
        self.mapDatesSlider = slider
        UIAccessibility.post(notification: .screenChanged, argument: slider)
    }

    private func removeDatesSlider() {
        self.mapDatesSlider.map { _ in
            self.animator?.remove()
            self.animator = nil
            self.mapDatesSlider = nil
        }
    }
}

// MARK: - MKMapViewDelegate

extension MapViewController: MKMapViewDelegate {

    var currentRegionBox: MapRegionBoxModel {
        let mRect = self.mapView.visibleMapRect
        let topLeftPoint = MKMapPoint(x: mRect.origin.x, y: mRect.origin.y)
        let bottomRightPoint = MKMapPoint(x: mRect.maxX, y: mRect.maxY)
        return MapRegionBoxModel(topLeft: topLeftPoint.coordinate, bottomRight: bottomRightPoint.coordinate)
    }
    
    func mapView(_ mapView: MKMapView, rendererFor overlay: MKOverlay) -> MKOverlayRenderer {
        
        if let polygon = overlay as? RiskAreaPolygon {
            return MapLayoutFactory.createPolygonRenderer(polygon: polygon)
        }

        return MKOverlayRenderer()
    }
    
    func mapView(_ mapView: MKMapView, viewFor annotation: MKAnnotation) -> MKAnnotationView? {
        if annotation is MKUserLocation {
            return nil
        }
        if let annotation = annotation as? UserLocationAnnotation, annotation.isRisky {
            return MapLayoutFactory.createRiskUserLocationView()
        }
        return MapLayoutFactory.createUserLocationView()
    }

    public func mapView(_ mapView: MKMapView, didAdd views: [MKAnnotationView]) {
        let annotation = views.filter { $0.annotation is MKUserLocation }.first
        if #available(iOS 14.0, *) {
            annotation?.zPriority = .max
        }
        annotation?.isEnabled = false
    }

    public func mapView(_ mapView: MKMapView, regionWillChangeAnimated animated: Bool) {
        if !animated {
            self.presentationLogic.didInteractWithMap()
        } else {
            self.presentationLogic.willChangeMapRegionAnimated()
        }
    }

    func mapView(_ mapView: MKMapView, regionDidChangeAnimated animated: Bool) {
        self.presentationLogic.didChangeMapPosition(box: self.currentRegionBox)
    }

    public func mapView(_ mapView: MKMapView, didSelect view: MKAnnotationView) {
        self.presentationLogic.didSelectAnnotationView(view: view)
    }

    func mapView(_ mapView: MKMapView, didUpdate userLocation: MKUserLocation) {
        self.locationUpdateWaiter.serve(for: Constant.kLocationUpdate)
    }
}

// MARK: - MapDatesSliderDelegate

extension MapViewController: MapDatesSliderDelegate {
    
    func didChangeDaysOffset(offset: Int) {
        self.presentationLogic.didChangeDaysOffset(offset: offset)
    }
}

// MARK: MapViewInput

extension MapViewController: MapViewInput {

    func deselectCurrentPolygon() {
        self.polygonSelector.deselectCurrent()
        self.removeMapInfo()
    }

    func selectLocationButton() {
        self.locationButton.isSelected = true
        self.locationButton.isUserInteractionEnabled = false
    }

    func deselectLocationButton() {
        self.locationButton.isSelected = false
        self.locationButton.isUserInteractionEnabled = true
    }

    func deselectCalendarButton() {
        self.calendarButton.isSelected = false
    }

    func selectCalendarButton() {
        self.calendarButton.isSelected = true
    }

    func showMapInfo(info: MapRegionInfoModel) {
        if self.mapInfoView == nil {
            self.showMapInfoView(info: info)
        } else {
            self.updateMapInfoView(info: info)
        }
    }

    func showMapInfoLoading(isLoading: Bool) {
        self.mapInfoView?.setupLoading(isLoading: isLoading)
    }

    func hideCurrentMapInfo() {
        self.removeMapInfo()
    }

    func showCalendar(offset: Int) {
        self.showDatesSlider(offset: offset)
    }

    func hideCalendar() {
        self.removeDatesSlider()
    }

    func showCurrentUserLocation(waitForLocationUpdate: Bool) {
        if waitForLocationUpdate {
            self.locationUpdateWaiter.wait(for: Constant.kLocationUpdate) { [weak self] result in
                guard case .success = result else {
                    return
                }
                self?.showCurrentUserLocation(waitForLocationUpdate: false)
            }
        } else {
            let location = self.mapView.userLocation
            let region = MKCoordinateRegion(center: location.coordinate, span: Constant.userLocationZoom)
            self.mapView.setRegion(region, animated: true)
        }
    }

    func selectPolygon(id: String, hasParent: Bool) {
        guard let polygon = self.polygonSelector.select(on: self.mapView, with: id) else {
            return
        }
        var region = MKCoordinateRegion(polygon.boundingMapRect)
        let zoom = hasParent ? Constant.regionZoom : Constant.stateZoom
        region.span = hasParent ? region.span : MKCoordinateSpan(
            latitudeDelta: max(region.span.latitudeDelta, zoom.latitudeDelta),
            longitudeDelta: max(region.span.longitudeDelta, zoom.longitudeDelta)
        )
        let padding = UIEdgeInsets(top: 0.0, left: 32.0, bottom: self.view.bounds.height * 0.2, right: 32.0)
        self.mapView.setVisibleRegion(mapRegion: region, edgePadding: padding, animated: true)
    }

    func deselectAllAnnotations() {
        self.mapView.annotations.compactMap { $0 as? MKAnnotationView }.forEach {
            $0.setSelected(false, animated: true)
        }
    }

    func selectAnnotation(annotation: MKAnnotation) {
        self.mapView.view(for: annotation).map {
            self.selectAnnotationView(view: $0)
        }
    }

    func selectAnnotationView(view: MKAnnotationView) {
        view.setSelected(true, animated: true)
    }

    func updateDatesSlider(riskDates: [Date]) {
        self.mapDatesSlider?.update(riskDates: riskDates)
    }

    func update(polygons: [RiskAreaPolygon]) {
        let exception = NSExceptionCatch.try {
            let drawnPolygons = self.mapView.overlays.compactMap { $0 as? RiskAreaPolygon }
            self.mapView.removeOverlays(drawnPolygons)
            self.mapView.addOverlays(polygons, level: .aboveRoads)
        }
        exception.map {
            LOG.E("MapView addOverlays method exception: " + $0.description)
            self.presentationLogic.didGetDrawingError(box: self.currentRegionBox)
        }
    }

    func updateNotRiskyLoactions(locations: [UserLocationAnnotationModel]) {
        self.mapView.removeAnnotations(self.mapView.annotations.compactMap { $0 as? UserLocationAnnotation }.filter { !$0.isRisky })
        self.mapView.addAnnotations(locations.map { UserLocationAnnotation(model: $0) })
    }

    func updateRiskyLocations(locations: [UserLocationAnnotationModel]) {
        self.mapView.removeAnnotations(self.mapView.annotations.compactMap { $0 as? UserLocationAnnotation }.filter { $0.isRisky })
        self.mapView.addAnnotations(locations.map { UserLocationAnnotation(model: $0) })
    }

    func setupLoading(isLoading: Bool) {
        if isLoading {
            LoadingView.showLoading(on: self.view, after: 2.0)
        } else {
            LoadingView.hideLoading(on: self.view)
        }
    }

    func hideDateAnnotation() {
        self.dateAnnotationView.isHidden = true
    }

    func showDateAnnotation(date: Date) {
        self.dateAnnotationView.configure(date: date)
        self.dateAnnotationView.isHidden = false
    }

    func updateBadge(value: Int) {
        if value > 0 {
            BadgeView(value: value).addTo(view: self.calendarButton)
        } else {
            self.calendarButton.removeBadge()
        }
    }

    func zoomToCoordinates(coordinates: [CLLocationCoordinate2D], animated: Bool) {
        let padding = UIEdgeInsets(top: 0.0, left: 32.0, bottom: self.view.bounds.height * 0.2, right: 32.0)
        self.mapView.zoomToCoordinates(
            coordinates: coordinates,
            edgePadding: padding,
            locationZoom: Constant.userLocationZoom,
            animated: animated
        )
    }

    func hideLocationButton() {
        self.locationButton.isHidden = true
    }
}

// MARK: - MapRegionInfoViewOutput

extension MapViewController: MapRegionInfoViewOutput {

    func didTapInfoURL(url: String, name: String) {
        let item = WebViewItem(settingsCellTitle: name, url: url)
        let vc = WebViewControllerFactory.defaultController(item: item)
        vc.navigationItem.leftBarButtonItem = HandlerBarButtonItem(barButtonSystemItem: .cancel) { [weak vc] in
            vc?.dismiss(animated: true, completion: nil)
        }
        let navVC = UINavigationController(rootViewController: vc)
        self.present(navVC, animated: true, completion: nil)
    }

    func didTapOnSeverityView() {
        let vc = LegendViewController()
        let navVC = UINavigationController(rootViewController: vc)
        self.present(navVC, animated: true, completion: nil)
    }
}
