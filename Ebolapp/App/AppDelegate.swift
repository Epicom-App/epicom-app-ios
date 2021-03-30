//
//  Created by Appsfactory GmbH
//  Copyright © 2020 Appsfactory GmbH. All rights reserved.
//

import UIKit

@UIApplicationMain
class AppDelegate: UIResponder, UIApplicationDelegate {
	
	var window: UIWindow?

	var uiTesting: Bool {
        return CommandLine.arguments.contains("--uitesting")
    }

    private let notificationsManager = NotificationsManager.shared
    private let locationAuthManager = LocationAuthManager()
    private var coordinator = InitialCoordinator()
	
	func application(_ application: UIApplication, didFinishLaunchingWithOptions launchOptions: [UIApplication.LaunchOptionsKey: Any]?) -> Bool {
		
		// configure aflogger
		AFLoggerHelper.configureLogger()
		
		if self.uiTesting == false {
            // configure AppCenter if not uitesting
            AppCenterHelper.shared.setup()

            // If iOS 13 is available the new BG tasks api will be used
            if #available(iOS 13.0, *) {
                BackgroundUpdateManager.shared.configure(operationsProviders: [UpdateManager.shared, WidgetManager.shared])
            } else {
                UIApplication.shared.setMinimumBackgroundFetchInterval(Constants.backgroundFetchInterval)
            }

            // Appearance
            self.setupAppearance()

            // Start the app
            self.startApp()
        }

		return true
	}

    func applicationDidBecomeActive(_ application: UIApplication) {
        guard DateProvider.shared.checkDateIsUpdated() else {
            return
        }
        // Restart the app if current day changed
        self.startApp()
    }

    func application(_ application: UIApplication, performFetchWithCompletionHandler completionHandler: @escaping (UIBackgroundFetchResult) -> Void) {
        UpdateManager.shared.update { (result, error) in
            if error != nil {
                completionHandler(.failed)
            } else if result == true {
                completionHandler(.newData)
            } else {
                completionHandler(.noData)
            }
        }
    }

    func applicationWillTerminate(_ application: UIApplication) {
        self.notificationsManager.showRiskMatchingSuspendedNotification()
    }

    private func setupAppearance() {
        UITabBar.appearance().tintColor = DynamicColor.navBarTintColor
        UITabBar.appearance().unselectedItemTintColor = DynamicColor.navBarTintColor.withAlphaComponent(0.6)
        UINavigationBar.appearance().tintColor = DynamicColor.navBarTintColor
    }

    private func configureManagers() {
        if self.locationAuthManager.authorizationStatus == .authorizedAlways {
            UserLocationManager.shared.start()
        }
        if self.notificationsManager.authorisationStatus == .authorized {
            self.notificationsManager.setup()
        }
    }

    private func startApp() {
        // Start the app
        self.coordinator.start {
            // Configure app managers
            self.configureManagers()
            // Update widget content
            WidgetManager.shared.update()
        }
    }
}
