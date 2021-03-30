//
//  WidgetConstants.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 23.03.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation

struct WidgetConstants {

    enum Color {
        static let lightColorThreshold: Float = 0.5
    }
    
    #if APPSTORE
        static let appGroupIdentifier: String = "group.de.freundeliberias.epicom"
    #else
        static let appGroupIdentifier: String = "group.de.appsfactory.Ebolapp"
    #endif
    
    static let widgetContentFileName: String = "Content.json"
}
