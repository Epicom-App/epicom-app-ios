//
//  SettingsLogicController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 18.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

protocol SettingsLogicControllerInput: class {
    func didLoad()
}

protocol SettingsLogicControllerOutput: class {
    func update(items: [SettingsItem])
}

class SettingsLogicController: SettingsLogicControllerInput {

    private weak var output: SettingsLogicControllerOutput?

    init(output: SettingsLogicControllerOutput) {
        self.output = output
    }

    func didLoad() {
        
        let settingsItems: [SettingsItem] = [
            Constants.StaticPages.dataPrivacyItem,
            Constants.StaticPages.imprintItem,
            Constants.StaticPages.aboutItem,
            OnboardingSettingsItem()
        ]

        self.output?.update(items: settingsItems)
    }
}
