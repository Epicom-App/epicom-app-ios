//
//  RiskAreaPolygon.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 09.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import MapKit

class RiskAreaPolygon: MKPolygon {
    var id: String = ""
    var parentId: String?
    var fillColor: UIColor?
    var fillColorRaw: String?
    var strokeColor: UIColor?
    var lineWidth: CGFloat = 0.0
    var coordinates: [CLLocationCoordinate2D]?
}

extension RiskAreaPolygon {

    public override func isEqual(_ object: Any?) -> Bool {
        let anotherPolygon = object as? RiskAreaPolygon
        return self.id == anotherPolygon?.id &&
            self.coordinates?.count == anotherPolygon?.coordinates?.count &&
            self.fillColorRaw == anotherPolygon?.fillColorRaw
    }
}
