//
//  MapDateAnnotationView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 01.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

class MapDateAnnotationView: ExtractableView {

    @IBOutlet weak var dateAnnotationView: UIView!
    @IBOutlet weak var dateAnnotationVisualEffectView: UIView!
    @IBOutlet weak var dateAnnotationLabel: UILabel!

    override func willMove(toSuperview newSuperview: UIView?) {
        super.willMove(toSuperview: newSuperview)
        newSuperview.map { _ in
            self.setupViews()
        }
    }

    private func setupViews() {
        self.dateAnnotationView.layer.cornerRadius = 16.0
        self.dateAnnotationView.addDefaultShadow()
        self.dateAnnotationVisualEffectView.layer.cornerRadius = 16.0
        self.dateAnnotationVisualEffectView.layer.masksToBounds = true
        self.dateAnnotationLabel.font = UIFont.systemFont(ofSize: 14.0, weight: .semibold)
        self.dateAnnotationLabel.textColor = DynamicColor.dateAnnotationColor
    }

    func configure(date: Date) {
        self.dateAnnotationLabel.text = MapDateFormatter.shared.longStringFromDate(date)
        self.dateAnnotationLabel.accessibilityLabel = MapDateFormatter.shared.longAccessiblityStringFromDate(date)
    }
}
