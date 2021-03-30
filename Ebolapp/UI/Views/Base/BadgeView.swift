//
//  BadgeView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 02.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension UIView {

    func removeBadge() {
        self.viewWithTag(BadgeView.badgeTag)?.removeFromSuperview()
    }
}

class BadgeView: UIView {

    static var badgeTag: Int = 20221

    struct Style {
        let height: CGFloat
        let padding: CGFloat
        let ledge: CGFloat
        let font: UIFont
        let badgeColor: UIColor
        let textColor: UIColor
    }

    private let value: Int
    private let style: Style

    private let label = UILabel()
    private var topConstraint: NSLayoutConstraint?
    private var trailingConstraint: NSLayoutConstraint?
    private var heightConstraint: NSLayoutConstraint?
    private var widthConstraint: NSLayoutConstraint?

    init(value: Int, style: Style) {
        self.value = value
        self.style = style
        super.init(frame: .zero)
        self.setup()
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    private func setup() {
        self.tag = Self.badgeTag
        self.backgroundColor = self.style.badgeColor
        self.addSubview(self.label)
        self.layer.cornerRadius = self.style.height / 2.0
        self.layer.masksToBounds = true
        self.label.bindToSuperview(insets: UIEdgeInsets(top: 0.0, left: self.style.padding, bottom: 0.0, right: self.style.padding))
        self.label.textColor = self.style.textColor
        self.label.textAlignment = .center
        self.label.font = self.style.font
        self.label.text = "\(self.value)"
    }

    override func layoutSubviews() {
        super.layoutSubviews()
        self.trailingConstraint?.constant = self.bounds.width / self.style.ledge
    }

    func addTo(view: UIView) {
        view.removeBadge()
        view.addSubview(self)
        self.translatesAutoresizingMaskIntoConstraints = false
        self.topConstraint = self.topAnchor.constraint(equalTo: view.topAnchor, constant: -self.style.height / self.style.ledge)
        self.trailingConstraint = self.trailingAnchor.constraint(equalTo: view.trailingAnchor)
        self.heightConstraint = self.heightAnchor.constraint(equalToConstant: self.style.height)
        self.widthConstraint = self.widthAnchor.constraint(greaterThanOrEqualToConstant: self.style.height)
        NSLayoutConstraint.activate([
            self.topConstraint,
            self.trailingConstraint,
            self.heightConstraint,
            self.widthConstraint
        ].compactMap { $0 })
    }
}

extension BadgeView.Style {

    static var `default`: Self {
        return .init(
            height: 18.0,
            padding: 4.0,
            ledge: 3.0,
            font: UIFont.systemFont(ofSize: 12.0, weight: .semibold),
            badgeColor: ColorName.colorRed.color,
            textColor: .white
        )
    }
}

extension BadgeView {

    convenience init(value: Int) {
        self.init(value: value, style: .default)
    }
}
