//
//  MapControlButton.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 23.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

class MapControlButton: StatesButton {

    override func willMove(toSuperview newSuperview: UIView?) {
        super.willMove(toSuperview: newSuperview)
        
        self.onHighlight = { [weak self] isHighlighted in
            if isHighlighted {
                self?.alpha = 0.7
            } else {
                UIView.animate(withDuration: 0.2) { [weak self] in
                    self?.alpha = 1.0
                }
            }
        }
        
        self.onEnable = { [weak self] isEnabled in
            self?.alpha = isEnabled ? 1.0 : 0.5
        }
        
        self.onSelect = { [weak self] _ in
            self?.setupSelectedState()
        }
    }

    override func layoutSubviews() {
        super.layoutSubviews()
        self.setupShadow(opacity: 0.4, offset: 4.0, radius: 8.0)
        self.setupSelectedState()
    }

    private func setupShadow(opacity: Float, offset: CGFloat, radius: CGFloat) {

        self.layer.cornerRadius = 5.0
        self.layer.shadowPath = UIBezierPath(roundedRect: self.bounds, cornerRadius: self.layer.cornerRadius).cgPath
        self.layer.shadowOffset = CGSize(width: 0.0, height: offset)
        self.layer.shadowRadius = radius
        self.layer.masksToBounds = false
        self.layer.shadowOpacity = opacity
        self.layer.shadowColor = UIColor.black.cgColor
    }
    
    private func setupSelectedState() {
        self.layer.backgroundColor = self.isSelected ? ColorName.colorMain.color.cgColor : DynamicColor.defaultBackgroundColor.cgColor
        self.tintColor = self.isSelected ? ColorName.colorWhite.color : DynamicColor.defaultIconsColor
    }
}
