//
// Created by Igor Tiukavkin on 23.10.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

enum ErrorAlertType {
    case noInternet, unknown

    var title: String {
        switch self {
        case .noInternet:
            return L10n.Localizable.noInternetErrorTitle
        case .unknown:
            return L10n.Localizable.errorTitle
        }
    }

    var message: String {
        switch self {
        case .noInternet:
            return L10n.Localizable.noInternetErrorMessage
        case .unknown:
            return L10n.Localizable.errorDefaultMessage
        }
    }
}

protocol MapAlertsHelper {
    func showErrorAlert(type: ErrorAlertType, onRefresh: @escaping () -> Void)
    func showLocationDeniedAlert()
}

protocol ErrorAlertsHelper {
    func showErrorAlert(onRefresh: @escaping () -> Void)
}

final class AlertsHelperFactory {

    static func createMapAlertsHelper() -> MapAlertsHelper {
        return AlertsHelper()
    }

    static func createErrorAlertsHelper() -> ErrorAlertsHelper {
        return AlertsHelper()
    }
}

final class AlertsHelper: MapAlertsHelper, ErrorAlertsHelper {

    // MARK: - MapAlertsHelper

    func showErrorAlert(type: ErrorAlertType, onRefresh: @escaping () -> Void) {
        let alert = UIAlertController(title: type.title, message: type.message, preferredStyle: .alert)
        alert.addAction(.init(title: L10n.Localizable.okButton, style: .cancel))
        alert.addAction(.init(title: L10n.Localizable.refreshButton, style: .default, handler: { _ in
            onRefresh()
        }))
        alert.show()
    }

    func showLocationDeniedAlert() {
        let alert = UIAlertController(
            title: L10n.Localizable.noLocationTitle,
            message: L10n.Localizable.noLocationInfo,
            preferredStyle: .alert
        )
        alert.addAction(.init(title: L10n.Localizable.okButton, style: .cancel))
        alert.addAction(.init(title: L10n.Localizable.openSettingsButton, style: .default, handler: { _ in
            guard let settingsUrl = URL(string: UIApplication.openSettingsURLString) else {
                return
            }
            if UIApplication.shared.canOpenURL(settingsUrl) {
                UIApplication.shared.open(settingsUrl)
            }
        }))
        alert.show()
    }

    // MARK: - NextStepsAlertsHelper

    func showErrorAlert(onRefresh: @escaping () -> Void) {
        self.showErrorAlert(type: .unknown, onRefresh: onRefresh)
    }
}
