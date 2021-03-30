//
//  RiskAreaPolygonRenderer.swift
//  Ebolapp
//
//  Created by Anne Weinert on 19.03.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation
import MapKit

class RiskAreaPolygonRenderer: MKPolygonRenderer {
    
    override func draw(_ mapRect: MKMapRect, zoomScale: MKZoomScale, in context: CGContext) {
        
        // blend mode is altered to fix adding up alpha values of overlapping polygons
        context.setBlendMode(.destinationAtop)
        super.draw(mapRect, zoomScale: zoomScale, in: context)
    }
}
