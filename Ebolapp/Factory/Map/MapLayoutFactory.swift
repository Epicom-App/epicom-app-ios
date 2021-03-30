//
// Created by Igor Tiukavkin on 11.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import MapKit

class MapLayoutFactory {

    static func createPolygonRenderer(polygon: RiskAreaPolygon) -> MKPolygonRenderer {
        let renderer = RiskAreaPolygonRenderer(polygon: polygon)
        renderer.fillColor = polygon.fillColor?.withAlphaComponent(0.65)
        renderer.strokeColor = polygon.strokeColor
        renderer.lineWidth = polygon.lineWidth
        return renderer
    }

    static func createRiskUserLocationView() -> MKAnnotationView {
        return self.createCircleAnnotationView(color: .red)
    }

    static func createUserLocationView() -> MKAnnotationView {
        return self.createCircleAnnotationView(color: ColorName.colorLocation.color)
    }

    static func createCircleAnnotationView(color: UIColor) -> MKAnnotationView {
        let view = CircleAnnotationView(color: color)
        return view
    }
}
