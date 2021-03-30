//
//  Array+Extensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 22.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import Foundation

extension Array {

    public subscript (safe index: Int) -> Element? {
        return Int(index) < count ? self[Int(index)] : nil
    }

    func exclude(_ isExcluded: (Element) -> Bool) -> [Element] {
        return self.filter { !isExcluded($0) }
    }
}

extension Array where Element: Hashable {

    public func distinct() -> [Element] {
        return self.reduce([], { $0.contains($1) ? $0 : $0 + [$1] })
    }
}
