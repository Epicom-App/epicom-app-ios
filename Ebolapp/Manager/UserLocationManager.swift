//
//  UserLocationManager.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 16.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import CoreLocation
import CommonCode

protocol UserLocationManagerInterface {
    
    /// Get current status and display error if denied
    var authorisationStatus: CLAuthorizationStatus { get }
    
    /// Start locations tracking and storing
    func start()
}

final class UserLocationManager: NSObject, UserLocationManagerInterface {
    
    static let shared: UserLocationManagerInterface = UserLocationManager()
    
    private let locationManager = CLLocationManager()
    private let saveLocationsUsecase = VisitsUseCaseFactory(databaseWrapper: CommonCodeDependencies.database).createSaveUserLocationsUseCase()
    
    var authorisationStatus: CLAuthorizationStatus {
        return CLLocationManager.authorizationStatus()
    }

    private let skipper = Skipper()
    
    private override init() {
        super.init()
        
        self.locationManager.activityType = .other
        self.locationManager.pausesLocationUpdatesAutomatically = false
        self.locationManager.allowsBackgroundLocationUpdates = true
        self.locationManager.delegate = self
    }
    
    func start() {
        
        if self.authorisationStatus != .authorizedAlways {
            self.locationManager.requestAlwaysAuthorization()
        }
        
        self.setupTracking()

        NotificationCenter.default.addObserver(
            self,
            selector: #selector(self.updateLocationOnActive),
            name: UIApplication.didBecomeActiveNotification,
            object: nil
        )
    }
    
    private func setupTracking() {
        if CLLocationManager.significantLocationChangeMonitoringAvailable() {
            self.locationManager.startMonitoringSignificantLocationChanges()
        } else {
            self.locationManager.stopMonitoringSignificantLocationChanges()
        }
    }

    @objc private func updateLocationOnActive() {
        self.locationManager.location.map {
            self.saveLocations(locations: [$0])
        }
    }

    private func saveLocations(locations: [CLLocation]) {
        self.saveLocationsUsecase.invoke(
            locations: locations.map { UserLocation(
                position: .init(lat: $0.coordinate.latitude, lon: $0.coordinate.longitude),
                timestampSec: Int64($0.timestamp.timeIntervalSince1970)
            ) },
            completionHandler: { _, error in
                error.map { LOG.E("Ann Error occured while saving UserLocation:\n\($0.localizedDescription)") }
            })
    }
}

extension UserLocationManager: CLLocationManagerDelegate {
    
    func locationManager(_ manager: CLLocationManager, didUpdateLocations locations: [CLLocation]) {
        self.saveLocations(locations: locations)
    }
    
    func locationManagerDidChangeAuthorization(_ manager: CLLocationManager) {
        self.setupTracking()
        self.skipper.skip(1) {
            WidgetManager.shared.update()
        }
    }
}
