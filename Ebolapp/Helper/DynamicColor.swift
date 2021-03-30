//
//  DynamicColor.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 05.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension DynamicColor {

    internal static let navBarTintColor = DynamicColor(dark: .colorWhite, default: .colorMain)
    internal static let dateAnnotationColor = DynamicColor(dark: .colorWhite, default: .colorMain)
    internal static let defaultBackgroundColor = DynamicColor(dark: .colorBgDark, default: .colorWhite)
    internal static let defaultIconsColor = DynamicColor(dark: .colorWhite, default: .colorMain)
    internal static let defaultTextColor = DynamicColor(dark: .colorWhite, default: .colorBlack)
    internal static let defaultLightTextColor = DynamicColor(dark: .colorBlack, default: .colorWhite)
    internal static let secondaryTextColor = DynamicColor(dark: .colorWhite, default: .colorSecondaryText)
    internal static let sliderScaleColor = DynamicColor(dark: .colorSecondaryText, default: .colorSliderScale)
    internal static let tintMainColor = DynamicColor(dark: .colorWhite, default: .colorMain)
    internal static let mapStrokeColor = DynamicColor(dark: .colorBgDark, default: .colorWhite)
}

class DynamicColor: UIColor {

    typealias RGBA = UInt32

    /// dark mode can only be applied in iOS 13 and later. previous iOS version fallback to the default value
    convenience init(dark: ColorName, default: ColorName) {

        if #available(iOS 13, *) {
            self.init(darkRGBAValue: dark.rgbaValue, defaultRGBAValue: `default`.rgbaValue)
        } else {
            self.init(rgbaValue: `default`.rgbaValue)
        }
    }

    @available(iOS 13, *)
    convenience init(darkRGBAValue: RGBA, defaultRGBAValue: RGBA) {

        let darkColor = UIColor(rgbaValue: darkRGBAValue)
        let defaultColor = UIColor(rgbaValue: defaultRGBAValue)

        self.init { traitCollection -> UIColor in

            switch traitCollection.userInterfaceStyle {

            case .dark:
                return darkColor
            default:
                return defaultColor
            }
        }
    }
}
