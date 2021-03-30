//
//  MapDateFormatter.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 16.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

final class MapDateFormatter: DateFormatter {
    
    static let shared = MapDateFormatter()
    
    private override init() {
        super.init()
    }
    
    required init?(coder: NSCoder) {
        super.init(coder: coder)
    }
    
    
    // MARK: - Date to String

    func shortStringFromDate(_ date: Date) -> String {
        self.dateFormat = "MMM d"
        return self.string(from: date)
    }
    
    func shortStringFrom(_ date: Date, withOffset offset: Int) -> String {
        return self.shortStringFromDate(self.dateFrom(date, withOffset: offset))
    }
    
    func longStringFromDate(_ date: Date) -> String {
        self.dateFormat = "dd.MM.yyyy"
        return self.string(from: date)
    }

    func longAccessiblityStringFromDate(_ date: Date) -> String {
        self.dateStyle = .long
        self.timeStyle = .none
        return self.string(from: date)
    }
    
    func longAccessiblityStringFromDate(_ date: Date, withOffset offset: Int) -> String {
        return self.longAccessiblityStringFromDate(self.dateFrom(date, withOffset: offset))
    }
    
    
    // MARK: - Date Calculation

    func dateFrom(_ date: Date, withOffset offset: Int) -> Date {
        return Calendar.current.date(byAdding: .day, value: offset, to: date) ?? date
    }
}
