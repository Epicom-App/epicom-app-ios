//
//  UIButton+Extensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 11.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension UIButton {

    func setBackgroundColor(_ color: UIColor?, for state: UIControl.State) {
        self.setBackgroundImage(color.map { color in
            let view = UIView()
            view.backgroundColor = color
            view.frame = CGRect(origin: .zero, size: CGSize(width: 1, height: 1))
            return view.asImage()
        }, for: state)
    }
}

private var handlerAssociationKey = "extension.Handler.handlerAssociationKey"

extension UIButton {

    typealias Handler = () -> Void

    private var handler: Handler? {
        get { objc_getAssociatedObject(self, &handlerAssociationKey) as? Handler }
        set { objc_setAssociatedObject(self, &handlerAssociationKey, newValue, .OBJC_ASSOCIATION_COPY_NONATOMIC) }
    }

    func addHandler(_ handler: @escaping Handler, for event: Event = .touchUpInside) {
        self.handler = handler
        self.removeTarget(nil, action: nil, for: event)
        self.addTarget(self, action: #selector(self.handleEvent), for: event)
    }

    @objc private func handleEvent() {
        self.handler?()
    }
}
