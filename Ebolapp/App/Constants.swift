//
//  Created by Appsfactory GmbH
//  Copyright © 2020 Appsfactory GmbH. All rights reserved.
//

import UIKit
import MapKit

struct Constants {
    static let backgroundFetchInterval: TimeInterval = 60*60 // Once an hour
    static let backgroundTaskId = "de.appsfactory.ebolapp.apprefresh"
    
    enum Polygon {
        static let strokeColor: UIColor = DynamicColor.mapStrokeColor
        static let lineWidth: CGFloat = 1.0
        static let selectedLineWidth: CGFloat = 4.0
    }

    enum StaticPages {
        static let dataPrivacyItem = WebViewItem(settingsCellTitle: L10n.Localizable.settingsDataPrivacy, url: API.staticPages.dataPrivacyURL)
        static let imprintItem = WebViewItem(settingsCellTitle: L10n.Localizable.settingsImprint, url: API.staticPages.imprintURL)
        static let aboutItem = WebViewItem(settingsCellTitle: L10n.Localizable.settingsAbout, url: API.staticPages.aboutURL)
    }

    static let oneDayInterval: TimeInterval = 24*60*60
    static let dateCheckInterval: TimeInterval = 60*1 // 1 minute
    static let daysBeforeToday: Int = 14
    static let riskVisitDuration: TimeInterval = 60*15 // 15 minutes
    
    // MARK: - Map center
    static let initialMapCenter = CLLocationCoordinate2D(latitude: 51.1657, longitude: 10.4515)
    static let initialLatitudinalMeters: CLLocationDistance = 640_000
    static let initialLongitudinalMeters: CLLocationDistance = 876_000
}
