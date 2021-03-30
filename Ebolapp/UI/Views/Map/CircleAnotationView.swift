//
//  CircleAnotationView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 25.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit
import MapKit

class CircleAnnotationView: MKAnnotationView {

    private let circle = UIView()
    private let circleSize = CGSize(width: 24.0, height: 24.0)
    private let scale: CGFloat = 1.25
    private let bubbleOffset: CGFloat = 16.0

    init(color: UIColor) {
        super.init(annotation: nil, reuseIdentifier: nil)
        self.frame = CGRect(
            origin: .zero,
            size: CGSize(
                width: self.circleSize.width * self.scale + self.bubbleOffset,
                height: self.circleSize.height * self.scale + self.bubbleOffset
            )
        )
        self.canShowCallout = true
        self.createCircle(color: color)
    }

    required init?(coder aDecoder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    func createCircle(color: UIColor) {
        self.addSubview(self.circle)
        self.circle.frame = CGRect(origin: .zero, size: self.circleSize)
        self.circle.backgroundColor = color
        self.circle.layer.borderColor = UIColor.white.cgColor
        self.circle.layer.borderWidth = 1.0
        self.circle.layer.cornerRadius = self.circleSize.height / 2.0
        self.circle.layer.masksToBounds = true
        self.circle.center = self.center
    }

    override func setSelected(_ selected: Bool, animated: Bool) {
        if selected {
            self.circle.scale(value: .init(x: self.scale, y: self.scale))
        } else {
            self.circle.normalize()
        }
    }
}
