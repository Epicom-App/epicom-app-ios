//
//  MapSlideableView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 16.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

class TopAnnotationView: ExtractableView {

    struct Style {
        let cornerRadius: CGFloat
        let bgColor: UIColor
        let labelColor: UIColor
        let labelFont: UIFont
    }
    
    @IBOutlet private weak var labelContainer: UIView!
    @IBOutlet private weak var textLabel: UILabel!
    @IBOutlet private weak var triangleView: TriangleView!
    
    private var style: Style = .default
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.applyStyle(style: self.style)
    }
    
    func configure(text: String) {
        self.textLabel.text = text
    }
    
    func applyStyle(style: Style) {
        self.style = style
        
        self.labelContainer.backgroundColor = style.bgColor
        self.labelContainer.layer.cornerRadius = style.cornerRadius
        self.labelContainer.layer.masksToBounds = true
        self.textLabel.textColor = style.labelColor
        self.textLabel.font = style.labelFont
        self.triangleView.fillColor = style.bgColor
        self.addDefaultShadow()
    }
}

extension TopAnnotationView.Style {

    static let `default`: Self =
        Self.init(
            cornerRadius: 12,
            bgColor: DynamicColor.defaultBackgroundColor,
            labelColor: DynamicColor.defaultTextColor,
            labelFont: UIFont.systemFont(ofSize: 12.0)
        )

    static let error: Self =
        Self.init(
            cornerRadius: 12,
            bgColor: ColorName.colorRed.color,
            labelColor: ColorName.colorWhite.color,
            labelFont: UIFont.systemFont(ofSize: 12.0)
        )
}
