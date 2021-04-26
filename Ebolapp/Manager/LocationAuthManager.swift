//
//  WidgetLocationManager.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 14.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CoreLocation

final class LocationAuthManager: NSObject {

    enum AuthError: Error {
        case failed
    }

    enum RequestType {
        case always, whenInUse
    }

    private let locationManager = CLLocationManager()
    private var authHandler: ((Result<CLAuthorizationStatus, Error>) -> Void)?
    private var continuousUpdates = true

    var authorizationStatus: CLAuthorizationStatus {
        if #available(iOS 14.0, *) {
            return self.locationManager.authorizationStatus
        } else {
            return CLLocationManager.authorizationStatus()
        }
    }

    override init() {
        super.init()
        self.locationManager.delegate = self
    }

    func requestAuthorization(type: RequestType = .whenInUse,
                              continuous: Bool = true,
                              handler: @escaping (Result<CLAuthorizationStatus, Error>) -> Void) {
        self.authHandler = handler
        self.continuousUpdates = continuous
        switch type {
        case .always:
            self.locationManager.requestAlwaysAuthorization()
        case .whenInUse:
            self.locationManager.requestWhenInUseAuthorization()
        }
    }
}

extension LocationAuthManager: CLLocationManagerDelegate {

    func locationManager(_ manager: CLLocationManager, didChangeAuthorization status: CLAuthorizationStatus) {
        switch status {
        case .denied, .restricted, .notDetermined:
            self.authHandler?(.failure(AuthError.failed))
        default:
            self.authHandler?(.success(status))
        }
        guard !self.continuousUpdates else {
            return
        }
        self.authHandler = nil
    }
}
