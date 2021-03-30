//
//  UIView+Extensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 08.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension UIView {

    struct Edge: OptionSet {
        let rawValue: Int

        static let top = Edge(rawValue: 1 << 0)
        static let leading = Edge(rawValue: 1 << 1)
        static let trailing = Edge(rawValue: 1 << 2)
        static let bottom = Edge(rawValue: 1 << 3)

        static let all: Edge = [.top, .leading, .trailing, .bottom]
        static let none: Edge = []
    }
    
    func findSubviews<T: UIView>() -> [T] {
        var result: [T] = []
        if let view = self as? T {
            result.append(view)
        } else {
            for view in self.subviews {
                result.append(contentsOf: view.findSubviews() as [T])
            }
        }
        return result
    }

    func isInHierarchy(of view: UIView) -> Bool {
        return view.subviews.contains(where: { $0 === self || self.isInHierarchy(of: $0) })
    }
    
    func bindToSuperview(priority: UILayoutPriority = .required) {
        self.bindToSuperview(insets: .zero, priority: priority)
    }
    
    func bindToSuperview(offset: CGFloat, priority: UILayoutPriority = .required) {
        self.bindToSuperview(insets: .init(top: offset, left: offset, bottom: offset, right: offset), priority: priority)
    }
    
    func bindToSuperview(insets: UIEdgeInsets, priority: UILayoutPriority = .required, fixed: Edge = .all) {
        guard let superView = self.superview else {
            return
        }
        self.translatesAutoresizingMaskIntoConstraints = false

        var constraints: [NSLayoutConstraint] = []

        if fixed.contains(.top) {
            constraints.append(self.topAnchor.constraint(equalTo: superView.topAnchor, constant: insets.top))
        } else {
            constraints.append(self.topAnchor.constraint(greaterThanOrEqualTo: superView.topAnchor, constant: insets.top))
        }
        if fixed.contains(.bottom) {
            constraints.append(self.bottomAnchor.constraint(equalTo: superView.bottomAnchor, constant: -insets.bottom))
        } else {
            constraints.append(self.bottomAnchor.constraint(lessThanOrEqualTo: superView.bottomAnchor, constant: -insets.bottom))
        }
        if fixed.contains(.leading) {
            constraints.append(self.leadingAnchor.constraint(equalTo: superView.leadingAnchor, constant: insets.left))
        } else {
            constraints.append(self.leadingAnchor.constraint(greaterThanOrEqualTo: superView.leadingAnchor, constant: insets.left))
        }
        if fixed.contains(.trailing) {
            constraints.append(self.trailingAnchor.constraint(equalTo: superView.trailingAnchor, constant: -insets.right))
        } else {
            constraints.append(self.trailingAnchor.constraint(lessThanOrEqualTo: superView.trailingAnchor, constant: -insets.right))
        }

        constraints.forEach { $0.priority = priority }

        NSLayoutConstraint.activate(constraints)
    }

    func bindToScrollViewAsContentView(isVertical: Bool = true) {

        guard let scrollView = self.superview as? UIScrollView else {
            return
        }

        self.translatesAutoresizingMaskIntoConstraints = false
        self.topAnchor.constraint(equalTo: scrollView.topAnchor).isActive = true
        self.leadingAnchor.constraint(equalTo: scrollView.leadingAnchor).isActive = true
        self.trailingAnchor.constraint(equalTo: scrollView.trailingAnchor).isActive = true

        if isVertical {
            self.bottomAnchor.constraint(greaterThanOrEqualTo: scrollView.bottomAnchor).isActive = true
            self.widthAnchor.constraint(equalTo: scrollView.widthAnchor).isActive = true
            let bottom = self.bottomAnchor.constraint(equalTo: scrollView.bottomAnchor)
            bottom.priority = .defaultLow
            bottom.isActive = true
        } else {
            self.leadingAnchor.constraint(greaterThanOrEqualTo: scrollView.leadingAnchor).isActive = true
            self.heightAnchor.constraint(equalTo: scrollView.heightAnchor).isActive = true
            let leading = self.leadingAnchor.constraint(equalTo: scrollView.leadingAnchor)
            leading.priority = .defaultLow
            leading.isActive = true
        }
    }

    func pinOnTop(to view: UIView, offset: CGFloat) {
        view.superview.map {
            $0.addSubview(self)
            self.translatesAutoresizingMaskIntoConstraints = false
            self.bottomAnchor.constraint(equalTo: view.topAnchor, constant: offset).isActive = true
            self.centerXAnchor.constraint(equalTo: view.centerXAnchor).isActive = true
        }
    }

    func wrap(insets: UIEdgeInsets, priority: UILayoutPriority = .required, fixed: Edge = .all) -> UIView {
        let wrapper = UIView()
        wrapper.backgroundColor = .clear
        wrapper.addSubview(self)
        self.bindToSuperview(insets: insets, priority: priority, fixed: fixed)
        return wrapper
    }

    func wrap(offset: CGFloat = 0, priority: UILayoutPriority = .required, fixed: Edge = .all) -> UIView {
        return self.wrap(insets: UIEdgeInsets(top: offset, left: offset, bottom: offset, right: offset), priority: priority, fixed: fixed)
    }

    @discardableResult
    func center(in view: UIView, insets: UIEdgeInsets, fixed: Edge = .none) -> UIView {
        view.addSubview(self)
        self.translatesAutoresizingMaskIntoConstraints = false
        if fixed.contains(.leading) {
            self.leadingAnchor.constraint(equalTo: view.leadingAnchor, constant: insets.left).isActive = true
        } else {
            self.leadingAnchor.constraint(greaterThanOrEqualTo: view.leadingAnchor, constant: insets.left).isActive = true
        }
        if fixed.contains(.trailing) {
            self.trailingAnchor.constraint(equalTo: view.trailingAnchor, constant: -insets.right).isActive = true
        } else {
            self.trailingAnchor.constraint(lessThanOrEqualTo: view.trailingAnchor, constant: -insets.right).isActive = true
        }
        if fixed.contains(.top) {
            self.topAnchor.constraint(equalTo: view.topAnchor, constant: insets.top).isActive = true
        } else {
            self.topAnchor.constraint(greaterThanOrEqualTo: view.topAnchor, constant: insets.top).isActive = true
        }
        if fixed.contains(.bottom) {
            self.bottomAnchor.constraint(equalTo: view.bottomAnchor, constant: -insets.bottom).isActive = true
        } else {
            self.bottomAnchor.constraint(lessThanOrEqualTo: view.bottomAnchor, constant: -insets.bottom).isActive = true
        }
        self.centerXAnchor.constraint(equalTo: view.centerXAnchor).isActive = true
        self.centerYAnchor.constraint(equalTo: view.centerYAnchor).isActive = true
        return view
    }

    @discardableResult
    func center(in view: UIView, offset: CGFloat = 0.0, fixed: Edge = .none) -> UIView {
        return self.center(in: view, insets: UIEdgeInsets(top: offset, left: offset, bottom: offset, right: offset), fixed: fixed)
    }

    func addDefaultShadow() {
        self.addShadow(opacity: 0.2, radius: 8, offset: .init(width: 0.0, height: 4.0), color: ColorName.colorBlack.color)
    }

    func addShadow(opacity: Float, radius: CGFloat, offset: CGSize, color: UIColor) {
        self.layer.shadowOffset  = offset
        self.layer.shadowRadius  = radius
        self.layer.shadowOpacity = opacity
        self.layer.shadowColor = color.cgColor
        self.layer.masksToBounds = false
    }

    func asImage() -> UIImage {
        let renderer = UIGraphicsImageRenderer(bounds: self.bounds)
        return renderer.image { rendererContext in
            self.layer.render(in: rendererContext.cgContext)
        }
    }
}

extension UIView {

    func scale(duration: TimeInterval = 0.1, value: CGPoint) {
        UIView.animate(withDuration: duration) {
            self.transform = self.transform.scaledBy(x: value.x, y: value.y)
        }
    }

    func normalize(duration: TimeInterval = 0.1) {
        UIView.animate(withDuration: duration) {
            self.transform = .identity
        }
    }
}

extension UIStackView {

    func removeAllArrangedSubviews() {
        self.arrangedSubviews.forEach {
            self.removeArrangedSubview($0)
            $0.removeFromSuperview()
        }
    }

    static var horizontal: UIStackView {
        let stackView = UIStackView()
        stackView.axis = .horizontal
        return stackView
    }

    static var vertical: UIStackView {
        let stackView = UIStackView()
        stackView.axis = .vertical
        return stackView
    }
}
