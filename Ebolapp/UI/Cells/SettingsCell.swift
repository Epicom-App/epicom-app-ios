//
//  SettingsCell.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 18.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

class SettingsCell: UITableViewCell {

    func configure(item: SettingsItem) {
        self.textLabel?.text = item.settingsCellTitle
    }
}
