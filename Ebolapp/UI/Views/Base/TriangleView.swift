//
//  TriangleView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 16.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

@IBDesignable
class TriangleView: DrawableView {

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setupAnchorPoints()
    }

    required init?(coder: NSCoder) {
        super.init(coder: coder)
        self.setupAnchorPoints()
    }

    private func setupAnchorPoints() {
        self.anchorPoints = [
            CGPoint(x: 0, y: 0),
            CGPoint(x: 1, y: 0),
            CGPoint(x: 0.5, y: 0.8)
        ]
    }
}
