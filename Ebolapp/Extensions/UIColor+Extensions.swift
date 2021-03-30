//
//  UIColor+Extensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 15.03.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension UIColor {

    var isLight: Bool {
        return self.isLight(threshold: WidgetConstants.Color.lightColorThreshold)
    }

    /// W3C Formula: http://www.w3.org/WAI/ER/WD-AERT/#color-contrast
    func isLight(threshold: Float) -> Bool {
        let originalCGColor = self.cgColor

        let RGBCGColor = originalCGColor.converted(to: CGColorSpaceCreateDeviceRGB(), intent: .defaultIntent, options: nil)
        guard let components = RGBCGColor?.components else {
            return false
        }
        guard components.count >= 3 else {
            return false
        }

        let brightness = Float(((components[0] * 299) + (components[1] * 587) + (components[2] * 114)) / 1000)
        return brightness > threshold
    }
}
