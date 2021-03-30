//
// Created by Igor Tiukavkin on 09.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import MapKit

class UserLocationAnnotation: MKPointAnnotation {
    var isRisky: Bool = false

    init(model: UserLocationAnnotationModel) {
        super.init()
        self.coordinate = model.coordinate
        self.title = model.title
        self.subtitle = model.subtitle
        self.isRisky = model.isRisky
    }
}

struct UserLocationAnnotationModel {
    let coordinate: CLLocationCoordinate2D
    let isRisky: Bool
    let title: String
    let subtitle: String
}

extension UserLocationAnnotationModel {

    init(visit: VisitModel, isRisky: Bool) {
        self.coordinate = visit.position
        self.isRisky = isRisky
        self.title = L10n.Localizable.mapLocationCalloutTitle
        self.subtitle = DateUtils.formattedPeriodBetween(timestampStartSec: visit.startTimestamp, timestampEndSec: visit.endTimestamp)
    }
}
