//
//  PolygonSelector.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 19.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import MapKit

protocol PolygonSelectorInterface: class {
    func didTap(on map: MKMapView, with point: CGPoint) -> MKPolygon?
    func select(on map: MKMapView, with id: String) -> MKPolygon?
    func deselectCurrent()
}

final class PolygonSelector: PolygonSelectorInterface {
    
    private var selectedPolygons: [MKPolygon]?
    private weak var mapView: MKMapView?

    func select(on map: MKMapView, with id: String) -> MKPolygon? {
        self.mapView = map
        let polygons = self.polygons(on: map, with: id)
        self.handleSelection(with: polygons)
        return polygons.sorted(by: { $0.pointCount > $1.pointCount }).first
    }

    func didTap(on map: MKMapView, with point: CGPoint) -> MKPolygon? {
        return self.polygons(on: map, with: point).first
    }

    func deselectCurrent() {
        self.selectedPolygons.map { $0.forEach { self.setDeselected(polygon: $0) } }
        self.selectedPolygons = nil
    }

    private func polygons(on map: MKMapView, with point: CGPoint) -> [MKPolygon] {
        // Check annotations if tap was on one of them
        for annotation in map.annotations {
            guard let view = map.view(for: annotation) else {
                continue
            }
            let viewPoint = view.convert(point, to: view)
            if view.frame.contains(viewPoint) {
                return []
            }
        }
        // Check polygons
        let coordinate = map.convert(point, toCoordinateFrom: nil)
        let mapPoint = MKMapPoint(coordinate)
        let polygons = map.overlays.compactMap { $0 as? RiskAreaPolygon }
        var polygonsAtPoint: [RiskAreaPolygon] = []
        for polygon in polygons {
            guard let renderer = map.renderer(for: polygon) as? MKPolygonRenderer else {
                continue
            }
            let tapPoint = renderer.point(for: mapPoint)
            if renderer.path.contains(tapPoint) {
                polygonsAtPoint.append(polygon)
            }
        }
        return polygonsAtPoint
            .exclude { element in polygonsAtPoint.contains(where: { $0.id == element.id && $0.pointCount > element.pointCount }) }
            .sorted(by: { $0.boundingMapRect.size < $1.boundingMapRect.size }).first.map { polygon in
            return polygons.filter { $0.id == polygon.id }
        } ?? []
    }

    private func polygons(on map: MKMapView, with id: String) -> [MKPolygon] {
        let polygons = map.overlays.compactMap { $0 as? RiskAreaPolygon }
        return polygons.filter { $0.id == id }
    }
    
    private func handleSelection(with polygons: [MKPolygon]) {
        let hadSelected = self.selectedPolygons != nil
        
        if hadSelected {
            self.deselectCurrent()
        }
        polygons.forEach { self.setSelected(polygon: $0) }
        self.selectedPolygons = polygons
    }
    
    private func setSelected(polygon: MKPolygon) {
        self.mapView.map {
            $0.removeOverlay(polygon)
            $0.addOverlay(polygon, level: .aboveRoads)
        }
        (self.mapView?.renderer(for: polygon) as? MKPolygonRenderer).map {
            $0.lineWidth = Constants.Polygon.selectedLineWidth
        }
    }
    
    private func setDeselected(polygon: MKPolygon) {
        (self.mapView?.renderer(for: polygon) as? MKPolygonRenderer).map {
            $0.lineWidth = Constants.Polygon.lineWidth
        }
    }
}

extension MKMapSize {

    static func < (lhs: MKMapSize, rhs: MKMapSize) -> Bool {
        return lhs.width < rhs.width && lhs.height < rhs.height
    }
}
