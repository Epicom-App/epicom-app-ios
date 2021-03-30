//
//  TabBarItem.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 15.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

enum Tab {
    case map, settings, help
    
    var navigationTitle: String {
        switch self {
        case .map:
            return L10n.Localizable.mapNavigationTitle
        case .settings:
            return L10n.Localizable.settingsTitle
        case .help:
            return L10n.Localizable.nextStepsNavigationTitle
        }
    }
    
    var tabBarItemTilte: String {
        switch self {
        case .map:
            return L10n.Localizable.mapTabBarTitle
        case .settings:
            return L10n.Localizable.settingsTitle
        case .help:
            return L10n.Localizable.nextStepsTabBarTitle
        }
    }

    var icon: UIImage {
        switch self {
        case .map:
            return Asset.tabBarMapIcon.image
        case .settings:
            return Asset.tabBarSettingsIcon.image
        case .help:
            return Asset.tabBarHelpIcon.image
        }
    }
}
