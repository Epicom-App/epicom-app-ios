//
//  EbolapWidgetProvider.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 12.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import CoreLocation
import WidgetKit

struct WidgetProvider: TimelineProvider {

    let locationManager = LocationAuthManager()
    
    private var content: WidgetContent? {
        let model: MapRegionInfoModel? = ContentManager.readContent(from: WidgetConstants.widgetContentFileName)
        return model.map { WidgetContent(mapRegionInfo: $0) }
    }
    
    func placeholder(in context: Context) -> WidgetContent {
        WidgetContent.placeholder
    }
    
    func getSnapshot(in context: Context, completion: @escaping (WidgetContent) -> Void) {
        completion(self.content ?? .placeholder)
    }
    
    func getTimeline(in context: Context, completion: @escaping (Timeline<WidgetContent>) -> Void) {

        let locationDeniedHandler = {
            let content = WidgetContent.noLocation
            let nextHour = Calendar.current.date(byAdding: .hour, value: 1, to: Date())!
            let timeline = Timeline(entries: [content], policy: .after(nextHour))
            completion(timeline)
        }

        let locationAvailableHandler = {
            let content = self.content ?? .noData
            let nextHour = Calendar.current.date(byAdding: .hour, value: 1, to: Date())!
            let timeline = Timeline(entries: [content], policy: .after(nextHour))
            completion(timeline)
        }

        self.handleUserLocation(onAvailable: locationAvailableHandler, onDenied: locationDeniedHandler)
    }

    private func handleUserLocation(onAvailable: @escaping () -> Void, onDenied: @escaping () -> Void) {
        switch self.locationManager.authorizationStatus {
        case .denied, .restricted, .notDetermined:
            onDenied()
        default:
            onAvailable()
        }
    }
}
