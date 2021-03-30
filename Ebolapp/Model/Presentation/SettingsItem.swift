//
//  SettingsItem.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 18.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

enum SettingsItemPresentationType {
    case push, present
}

protocol SettingsItem {
    var settingsCellTitle: String { get }
    var target: UIViewController { get }
    var presentationType: SettingsItemPresentationType { get }
}
