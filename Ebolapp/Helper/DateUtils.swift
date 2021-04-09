//
// Created by Igor Tiukavkin on 09.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CommonCode

class DateUtils {

    static func formattedPeriodBetween(timestampStartSec: TimeInterval, timestampEndSec: TimeInterval) -> String {
        return CommonCode.DateUtils().formattedPeriodBetween(
            timestampStartSec: Int64(timestampStartSec),
            timestampEndSec: Int64(timestampEndSec),
            timeZone: .current
        )
    }

    static func dayStartTimestamp(timestampSec: TimeInterval) -> TimeInterval {
        return TimeInterval(CommonCode.DateUtils().dayStartTimestamp(timestampSec: Int64(timestampSec)))
    }

    static func dayEndTimestamp(timestampSec: TimeInterval) -> TimeInterval {
        return TimeInterval(CommonCode.DateUtils().dayEndTimestamp(timestampSec: Int64(timestampSec)))
    }

    static func daysBetween(date: Date, anotherDate: Date) -> Int {
        let calendar = Calendar.current

        let date1 = calendar.startOfDay(for: date)
        let date2 = calendar.startOfDay(for: anotherDate)

        return calendar.dateComponents([.day], from: date1, to: date2).day ?? 0
    }

    static func daysBetween(timestamp: TimeInterval, anotherTimestamp: TimeInterval) -> Int {
        let date1 = Date(timeIntervalSince1970: timestamp)
        let date2 = Date(timeIntervalSince1970: anotherTimestamp)
        return self.daysBetween(date: date1, anotherDate: date2)
    }

    static func isSameDayTimestamps(timestamp: TimeInterval, another: TimeInterval) -> Bool {
        let date1 = Date(timeIntervalSince1970: timestamp)
        let date2 = Date(timeIntervalSince1970: another)
        return Calendar.current.isDate(date1, inSameDayAs: date2)
    }

    static func isTimestampInRange(timestamp: TimeInterval, range: (from: TimeInterval, to: TimeInterval)) -> Bool {
        let oneDayInterval: TimeInterval = 60*60*24
        var timestampToCheck: TimeInterval = range.to

        while self.daysBetween(timestamp: range.from, anotherTimestamp: timestampToCheck) >= 0 {
            if self.isSameDayTimestamps(timestamp: timestamp, another: timestampToCheck) {
                return true
            }
            timestampToCheck -= oneDayInterval
        }

        return false
    }
}
