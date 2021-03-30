//
//  DrawableView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 10.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

///
/// Anchor points:
///
/// topLeft: x=0, y=0
/// topRight: x=1, y=0
/// bottomLeft: x=0, y=1
/// bottomRight: x=1, y=1
///
class DrawableView: UIView {

    var fillColor: UIColor? = .white {
        didSet { self.setNeedsDisplay() }
    }

    var anchorPoints: [CGPoint] = [] {
        didSet { self.setNeedsDisplay() }
    }

    convenience init(anchorPoints: [CGPoint]) {
        self.init(frame: .zero)
        self.anchorPoints = anchorPoints
    }

    override func draw(_ rect: CGRect) {
        super.draw(rect)

        if anchorPoints.count == 0 {
            LOG.E("Anchor points for drawable view are not configured")
        }

        if anchorPoints.filter({ $0.x < 0 || $0.x > 1 || $0.y < 0 || $0.y > 1 }).count > 0 {
            LOG.E("Anchor points should be configured in range (0...1)")
        }

        let points = self.anchorPoints.map {
            CGPoint(x: rect.maxX * $0.x, y: rect.maxY * $0.y)
        }

        let ctx = UIGraphicsGetCurrentContext()

        ctx?.beginPath()
        points.enumerated().forEach { item in
            if item.offset == 0 {
                ctx?.move(to: item.element)
            } else {
                ctx?.addLine(to: item.element)
            }
        }
        ctx?.closePath()

        self.fillColor.map { ctx?.setFillColor($0.cgColor) }
        ctx?.fillPath()
    }

    override func layoutSubviews() {
        super.layoutSubviews()
        self.setNeedsDisplay()
    }
}
