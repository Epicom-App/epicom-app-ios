//
// Created by Igor Tiukavkin on 17.03.21.
// Copyright (c) 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

final class RiskMatchExclamationMark: UIView {

    struct Style {
        let textColor = DynamicColor.defaultLightTextColor
        let backgroundColor = ColorName.colorRed.color
    }

    private let label = UILabel()

    var style = Style() {
        didSet { self.applyStyle() }
    }

    override init(frame: CGRect = .zero) {
        super.init(frame: frame)
        self.baseSetup()
    }

    required init?(coder: NSCoder) {
        super.init(coder: coder)
        self.baseSetup()
    }

    private func baseSetup() {
        self.addSubview(self.label)
        self.label.bindToSuperview()
        self.label.translatesAutoresizingMaskIntoConstraints = false
        self.label.widthAnchor.constraint(equalToConstant: 16.0).isActive = true
        self.label.heightAnchor.constraint(equalToConstant: 16.0).isActive = true
        self.label.textAlignment = .center
        self.label.font = UIFont.boldSystemFont(ofSize: 14.0)
        self.label.text = "!"

        self.layer.cornerRadius = 8.0
        self.layer.masksToBounds = true
        self.applyStyle()
    }

    private func applyStyle() {
        self.backgroundColor = self.style.backgroundColor
        self.label.textColor = self.style.textColor
    }
}
