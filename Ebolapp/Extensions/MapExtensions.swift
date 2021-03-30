//
//  MapExtensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 19.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import MapKit

extension MKCoordinateRegion {
    
    var mapRect: MKMapRect {
        let a = MKMapPoint(CLLocationCoordinate2DMake(
                            self.center.latitude + self.span.latitudeDelta / 2,
                            self.center.longitude - self.span.longitudeDelta / 2))
        
        let b = MKMapPoint(CLLocationCoordinate2DMake(
                            self.center.latitude - self.span.latitudeDelta / 2,
                            self.center.longitude + self.span.longitudeDelta / 2))
        
        return MKMapRect(x: min(a.x, b.x), y: min(a.y, b.y), width: abs(a.x-b.x), height: abs(a.y-b.y))
    }
}

extension MKMapView {
    func setVisibleRegion(mapRegion: MKCoordinateRegion, edgePadding insets: UIEdgeInsets, animated animate: Bool) {
        self.setVisibleMapRect(mapRegion.mapRect, edgePadding: insets, animated: animate)
    }

    func zoomToCoordinates(coordinates: [CLLocationCoordinate2D], edgePadding insets: UIEdgeInsets, locationZoom: MKCoordinateSpan, animated animate: Bool) {

        let sortedByLatitude = coordinates.sorted(by: { $0.latitude < $1.latitude })
        let sortedByLongitude = coordinates.sorted(by: { $0.longitude < $1.longitude })

        guard
            let minLatitude = sortedByLatitude.first?.latitude,
            let maxLatitude = sortedByLatitude.last?.latitude,
            let minLongitude = sortedByLongitude.first?.longitude,
            let maxLongitude = sortedByLongitude.last?.longitude else {
            return
        }

        let center = CLLocationCoordinate2D(latitude: (minLatitude + maxLatitude) / 2, longitude: (minLongitude + maxLongitude) / 2)
        let latitudeDelta = max(maxLatitude - minLatitude, locationZoom.latitudeDelta)
        let longitudeDelta = max(maxLongitude - minLongitude, locationZoom.longitudeDelta)
        let region = MKCoordinateRegion(center: center, span: MKCoordinateSpan(latitudeDelta: latitudeDelta, longitudeDelta: longitudeDelta))

        self.setVisibleRegion(mapRegion: region, edgePadding: insets, animated: animate)
    }
}
