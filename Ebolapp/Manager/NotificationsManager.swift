//
//  NotificationsManager.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 24.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import UserNotifications

protocol EbolapNotifications: class {
    func showNewRiskNotification(type: RiskMatchType)
    func showRiskMatchingSuspendedNotification()
}

final class NotificationsManager: NSObject {

    static let shared = NotificationsManager()

    public enum AuthorisationStatus: Int {

        case notDetermined = 0
        case denied = 1
        case authorized = 2

        init(status: UNAuthorizationStatus) {
            switch status {
            case .notDetermined:
                self = .notDetermined
            case .denied:
                self = .denied
            default:
                self = .authorized
            }
        }
    }

    var authorisationStatus: AuthorisationStatus {
        var notificationSettings: UNNotificationSettings?
        let semaphore = DispatchSemaphore(value: 0)

        DispatchQueue.global(qos: .userInitiated).async {
            UNUserNotificationCenter.current().getNotificationSettings { settings in
                notificationSettings = settings
                semaphore.signal()
            }
        }

        if semaphore.wait(timeout: .now() + 1) == .timedOut {
            return .notDetermined
        }
        return notificationSettings.map { AuthorisationStatus(status: $0.authorizationStatus) } ?? .notDetermined
    }

    private override init() {
        super.init()
    }

    func setup(completion: ((Bool) -> Void)? = nil) {
        let unc = UNUserNotificationCenter.current()
        unc.requestAuthorization(options: [.alert, .badge, .sound]) { granted, _ in
            DispatchQueue.main.async {
                completion?(granted)
            }
        }
        unc.delegate = self
    }

    func scheduleLocalNotification(title: String, subtitle: String, after: TimeInterval) {
        let content = UNMutableNotificationContent()
        content.title = title
        content.body = subtitle
        content.sound = UNNotificationSound.default

        let trigger = UNTimeIntervalNotificationTrigger(timeInterval: after, repeats: false)
        let request = UNNotificationRequest(identifier: UUID().uuidString, content: content, trigger: trigger)
        UNUserNotificationCenter.current().add(request)
    }
}

extension NotificationsManager: EbolapNotifications {

    func showNewRiskNotification(type: RiskMatchType) {
        switch type {
        case .regionChange:
            self.showRiskRegionChangeNotification()
        case .severityIncrease:
            self.showRiskSeverityIncreaseNotification()
        default:
            break
        }
    }

    func showRiskRegionChangeNotification() {
        self.scheduleLocalNotification(
            title: L10n.Localizable.newRiskMatchNotificationTitle,
            subtitle: L10n.Localizable.newRiskMatchNotificationRegionChangedInfo,
            after: 1
        )
    }

    func showRiskSeverityIncreaseNotification() {
        self.scheduleLocalNotification(
            title: L10n.Localizable.newRiskMatchNotificationTitle,
            subtitle: L10n.Localizable.newRiskMatchNotificationSeverityIncreasedInfo,
            after: 1
        )
    }

    func showRiskMatchingSuspendedNotification() {
        self.scheduleLocalNotification(
            title: L10n.Localizable.riskMatchingSuspendedNotificationTitle,
            subtitle: L10n.Localizable.riskMatchingSuspendedNotificationMessage,
            after: 1
        )
    }
}

//swiftlint:disable line_length
extension NotificationsManager: UNUserNotificationCenterDelegate {

    func userNotificationCenter(_ center: UNUserNotificationCenter, willPresent notification: UNNotification, withCompletionHandler completionHandler: @escaping (UNNotificationPresentationOptions) -> Void) {
        completionHandler([.alert, .sound])
    }
}
