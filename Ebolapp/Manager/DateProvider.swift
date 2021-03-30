//
//  DateProvider.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 24.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

final class DateProvider {

    static let shared = DateProvider()

    var today = Date()

    func checkDateIsUpdated() -> Bool {
        let newDate = Date()
        defer { self.today = newDate }
        return DateUtils.daysBetween(date: self.today, anotherDate: newDate) > 0
    }
}
