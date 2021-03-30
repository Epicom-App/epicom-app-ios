//
//  WidgetContent.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 12.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import SwiftUI
import WidgetKit
import Intents

enum WidgetContent: TimelineEntry {
    
    struct Content {
        let name: String
        let severity: String
        let maxSeverity: String
        let severityInfo: String
        let color: SwiftUI.Color
        let casesNumber: String
        let casesNumberInfo: String
        let disease: String
    }

    var date: Date { Date() }

    case content(Content)
    case noData
    case noLocation
}

extension WidgetContent {
    
    init(mapRegionInfo: MapRegionInfoModel) {
        self = .content(.init(
            name: mapRegionInfo.name,
            severity: mapRegionInfo.severity,
            maxSeverity: mapRegionInfo.maxSeverity,
            severityInfo: mapRegionInfo.severityInfo,
            color: SwiftUI.Color(mapRegionInfo.color),
            casesNumber: "\(Int(mapRegionInfo.casesNumber))",
            casesNumberInfo: mapRegionInfo.casesNumberInfo,
            disease: mapRegionInfo.disease
        ))
    }
}

extension WidgetContent {
    
    static var placeholder: Self {
        return .content(
            .init(
                name: "Leipzig",
                severity: "2",
                maxSeverity: "5",
                severityInfo: L10n.Localizable.widgetPlaceholderInfo,
                color: .green,
                casesNumber: "10",
                casesNumberInfo: "> 5 <= 25",
                disease: L10n.Localizable.widgetPlaceholderDisease
            )
        )
    }
}
