//
//  HandlerBarButtonItem.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 22.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

public class HandlerBarButtonItem: UIBarButtonItem {

    private var handler: (() -> Void)?

    public convenience init(image: UIImage?, accessibilityLabel: String? = nil, style: Style = .plain, handler: @escaping () -> Void) {
        self.init(image: image, style: style, target: nil, action: nil)
        self.target = self
        self.action = #selector(self.pressed)
        self.accessibilityLabel = accessibilityLabel
        self.handler = handler
    }

    public convenience init(barButtonSystemItem: SystemItem, accessibilityLabel: String? = nil, style: Style = .plain, handler: @escaping () -> Void) {
        self.init(barButtonSystemItem: barButtonSystemItem, target: nil, action: nil)
        self.target = self
        self.action = #selector(self.pressed)
        self.accessibilityLabel = accessibilityLabel
        self.handler = handler
    }

    public convenience init(title: String?, style: Style = .plain, handler: @escaping () -> Void) {
        self.init(title: title, style: style, target: nil, action: nil)
        self.target = self
        self.action = #selector(self.pressed)
        self.handler = handler
    }

    @objc private func pressed() {
        self.handler?()
    }
}
