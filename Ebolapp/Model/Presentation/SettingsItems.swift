//
// Created by Igor Tiukavkin on 16.02.21.
// Copyright (c) 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

struct OnboardingSettingsItem: SettingsItem {

    let settingsCellTitle = L10n.Localizable.settingsOnboarding
    let presentationType: SettingsItemPresentationType = .present
    var target: UIViewController {
        let onboardingVC = OnboardingViewController()
        return UINavigationController(rootViewController: onboardingVC)
    }
}

extension WebViewItem: SettingsItem {

    var presentationType: SettingsItemPresentationType { .push }

    var target: UIKit.UIViewController {
        return WebViewControllerFactory.staticPageController(item: self)
    }
}
