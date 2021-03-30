//
//  DebugDetailsHeaderView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 22.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

class DebugDetailsHeaderView: UIView {

    private let titles: [String]
    private let stackView = UIStackView()

    init(titles: [String]) {
        self.titles = titles
        super.init(frame: .zero)
        self.setup()
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    private func setup() {
        self.backgroundColor = UIColor.lightGray
        self.stackView.axis = .horizontal
        self.titles.forEach {
            let label = UILabel()
            label.text = $0
            label.sizeToFit()
            label.textAlignment = .center
            label.numberOfLines = 1
            label.setContentCompressionResistancePriority(.required, for: .horizontal)

            let wrapper = label.wrap(offset: 16.0, priority: .init(999))
            let constraint = wrapper.widthAnchor.constraint(greaterThanOrEqualToConstant: UIScreen.main.bounds.width / 3.3)
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
        self.addSubview(self.stackView)
        self.stackView.bindToSuperview()
        self.layoutIfNeeded()
        let size = self.systemLayoutSizeFitting(.init(width: CGFloat.infinity, height: CGFloat.infinity))
        self.frame = CGRect(origin: .zero, size: size)
    }

    func width(at index: Int) -> CGFloat {
        return self.stackView.arrangedSubviews.filter { $0.bounds.width > 1.0 }[safe: index]?.bounds.width ?? 0.0
    }
}
