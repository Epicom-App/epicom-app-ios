//
//  UIAlertController+Extensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 23.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension UIAlertController {
    
    func show(animated: Bool = true, completion: (() -> Void)? = nil) {
        let vc = UIApplication.shared.delegate?.window??.rootViewController
        vc?.present(self, animated: animated, completion: completion)
    }
}
