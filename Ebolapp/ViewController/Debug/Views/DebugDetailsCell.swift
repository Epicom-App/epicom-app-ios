//
//  DebugDetailsCell.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 22.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

class DebugDetailsCell: UITableViewCell {

    private let stackView = UIStackView()

    override init(style: UITableViewCell.CellStyle, reuseIdentifier: String?) {
        super.init(style: style, reuseIdentifier: reuseIdentifier)
        self.contentView.addSubview(stackView)
        self.stackView.bindToSuperview()
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    func configure(titles: [String], widths: [CGFloat]) {
        self.stackView.removeAllArrangedSubviews()
        titles.enumerated().forEach {
            let label = UILabel()
            label.text = $0.element
            label.textAlignment = .center
            label.numberOfLines = 0

            let wrapper = label.wrap(offset: 8.0, priority: .init(999))
            let constraint = wrapper.widthAnchor.constraint(equalToConstant: widths[safe: $0.offset] ?? 0.0)
            constraint.priority = .init(999)
            constraint.isActive = true
            self.stackView.addArrangedSubview(wrapper)

            let separator = UIView()
            separator.backgroundColor = .darkGray
            separator.widthAnchor.constraint(equalToConstant: 1.0).isActive = true
            self.stackView.addArrangedSubview(separator)
        }
        self.stackView.arrangedSubviews.last.map {
            self.stackView.removeArrangedSubview($0)
            $0.removeFromSuperview()
        }
    }
}
