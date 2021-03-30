//
// Created by Igor Tiukavkin on 11.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension UIImage {

    func withColor(_ color: UIColor) -> UIImage {
        UIGraphicsBeginImageContextWithOptions(self.size, false, self.scale)
        if let context = UIGraphicsGetCurrentContext() {
            context.translateBy(x: 0, y: self.size.height)
            context.scaleBy(x: 1.0, y: -1.0)
            context.setBlendMode(.normal)
            let rect = CGRect(origin: .zero, size: self.size)
            if let cgImage = self.cgImage {
                context.clip(to: rect, mask: cgImage)
                color.setFill()
                context.fill(rect)
                let newImage = UIGraphicsGetImageFromCurrentImageContext()
                UIGraphicsEndImageContext()
                return newImage ?? self
            }
        }
        return self
    }

    func resizeToMaxSide(maxSize: CGFloat, opaque: Bool = false) -> UIImage {

        let width = self.size.width
        let height = self.size.height

        guard width > maxSize || height > maxSize else {
            return self
        }

        let aspect = width / height

        let newWidth: CGFloat
        let newHeight: CGFloat

        if aspect > 1 {
            newWidth = maxSize
            newHeight = newWidth / aspect
        } else {
            newHeight = maxSize
            newWidth = newHeight * aspect
        }

        UIGraphicsBeginImageContextWithOptions(CGSize(width: newWidth, height: newHeight), opaque, self.scale)
        self.draw(in: CGRect(x: 0, y: 0, width: newWidth, height: newHeight))
        let newImage = UIGraphicsGetImageFromCurrentImageContext()
        UIGraphicsEndImageContext()

        return newImage ?? self
    }
}
