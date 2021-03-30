//
// Copyright (c) 2020 APPSfactory. All rights reserved.
//

import UIKit

public extension CGPoint {

    func x(_ value: CGFloat) -> CGPoint {
        return CGPoint(x: value, y: y)
    }

    func y(_ value: CGFloat) -> CGPoint {
        return CGPoint(x: x, y: value)
    }

    static func + (lhs: CGPoint, rhs: CGPoint) -> CGPoint {
        return CGPoint(x: lhs.x + rhs.x, y: lhs.y + rhs.y)
    }
}

public extension CGSize {

    func width(_ value: CGFloat) -> CGSize {
        return CGSize(width: value, height: height)
    }

    func height(_ value: CGFloat) -> CGSize {
        return CGSize(width: width, height: value)
    }

    static func + (lhs: CGSize, rhs: CGSize) -> CGSize {
        return CGSize(width: lhs.width + rhs.width, height: lhs.height + rhs.height)
    }
}

public extension CGRect {

    func width(_ value: CGFloat) -> CGRect {
        return CGRect(origin: origin, size: size.width(value))
    }

    func height(_ value: CGFloat) -> CGRect {
        return CGRect(origin: origin, size: size.height(value))
    }

    func x(_ value: CGFloat) -> CGRect {
        return CGRect(origin: origin.x(value), size: size)
    }

    func y(_ value: CGFloat) -> CGRect {
        return CGRect(origin: origin.y(value), size: size)
    }

    func padding(_ value: CGFloat) -> CGRect {
        return self.paddingHorizontal(value).paddingVertical(value)
    }

    func paddingHorizontal(_ value: CGFloat) -> CGRect {
        return self.x(self.minX - value).width(self.width + value*2)
    }

    func paddingVertical(_ value: CGFloat) -> CGRect {
        return self.y(self.minY - value).height(self.height + value*2)
    }

    static func + (lhs: CGRect, rhs: CGRect) -> CGRect {
        return CGRect(origin: lhs.origin + rhs.origin, size: lhs.size + rhs.size)
    }
}

public extension UIEdgeInsets {

    func top(_ top: CGFloat) -> UIEdgeInsets {
        return UIEdgeInsets(top: top, left: left, bottom: bottom, right: right)
    }

    func left(_ left: CGFloat) -> UIEdgeInsets {
        return UIEdgeInsets(top: top, left: left, bottom: bottom, right: right)
    }

    func bottom(_ bottom: CGFloat) -> UIEdgeInsets {
        return UIEdgeInsets(top: top, left: left, bottom: bottom, right: right)
    }

    func right(_ right: CGFloat) -> UIEdgeInsets {
        return UIEdgeInsets(top: top, left: left, bottom: bottom, right: right)
    }

    static func + (lhs: UIEdgeInsets, rhs: UIEdgeInsets) -> UIEdgeInsets {
        return UIEdgeInsets(top: lhs.top + rhs.top, left: lhs.left + rhs.left, bottom: lhs.bottom + rhs.bottom, right: lhs.right + rhs.right)
    }
}
