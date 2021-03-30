//
// Created by Igor Tiukavkin on 23.10.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

final class ViewAnimator {

    private weak var view: UIView?
    private var bottomConstraint: NSLayoutConstraint?
    private weak var movingConstraint: NSLayoutConstraint?
    private var insets: UIEdgeInsets = .zero

    init(view: UIView, movingConstraint: NSLayoutConstraint?) {
        self.view = view
        self.movingConstraint = movingConstraint
    }

    func show(in superView: UIView, insets: UIEdgeInsets) {
        guard let view = self.view else {
            return
        }
        self.insets = insets
        superView.addSubview(view)
        view.translatesAutoresizingMaskIntoConstraints = false
        view.leadingAnchor.constraint(equalTo: superView.leadingAnchor, constant: insets.left).isActive = true
        view.trailingAnchor.constraint(equalTo: superView.trailingAnchor, constant: -insets.right).isActive = true
        let bottom = view.bottomAnchor.constraint(equalTo: superView.safeAreaLayoutGuide.bottomAnchor, constant: UIScreen.main.bounds.height)
        bottom.isActive = true
        superView.layoutIfNeeded()

        bottom.constant = -insets.bottom

        UIView.animate(
            withDuration: 0.4,
            delay: 0.0,
            usingSpringWithDamping: 0.8,
            initialSpringVelocity: 0.5,
            options: .curveEaseInOut,
            animations: { [weak superView] in
                superView?.layoutIfNeeded()
            }, completion: { _ in })

        DispatchQueue.main.async {
            self.movingConstraint?.constant = insets.bottom*2 + view.bounds.height
            UIView.animate(withDuration: 0.3) { [weak superView] in
                superView?.layoutIfNeeded()
            }
        }

        self.bottomConstraint = bottom
    }

    func remove() {
        let view = self.view
        let superView = self.view?.superview
        let bottomConstraint = self.bottomConstraint
        let movingConstraint = self.movingConstraint

        bottomConstraint?.constant = UIScreen.main.bounds.height
        UIView.animate(withDuration: 0.4, delay: 0.0, options: .curveEaseIn, animations: { [weak superView] in
            superView?.layoutIfNeeded()
        }, completion: { [weak view] _ in
            view?.removeFromSuperview()
        })

        movingConstraint?.constant = self.insets.bottom
        UIView.animate(withDuration: 0.3) {  [weak superView] in
            superView?.layoutIfNeeded()
        }
    }
}
