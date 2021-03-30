//
//  String+Extensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 22.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension String {

    func splitCamelCase() -> String {
        let uppercasedChars = Set(self.filter { $0.isUppercase })
        var result = self
        for char in uppercasedChars {
            result = result.replacingOccurrences(of: "\(char)", with: " \(char)")
        }
        return result.trim()
    }

    func trim() -> String {
        self.trimmingCharacters(in: .whitespacesAndNewlines)
    }

    func matches(regex pattern: String,
                 options: NSRegularExpression.Options = [],
                 matchingOptions: NSRegularExpression.MatchingOptions = []) -> [String] {

        let regex = try? NSRegularExpression(pattern: pattern, options: options)
        let range = (self as NSString).range(of: self)
        let matches = regex?.matches(in: self, options: matchingOptions, range: range) ?? []
        return matches.map { (self as NSString).substring(with: $0.range) }
    }

    func attributed(_ attributes: [NSAttributedString.Key: Any]) -> NSAttributedString {
        return NSAttributedString(string: self, attributes: attributes)
    }
}

extension NSMutableParagraphStyle {

    func lineSpacing(_ value: CGFloat) -> NSMutableParagraphStyle {
        self.lineSpacing = value
        return self
    }

    func alignment(_ value: NSTextAlignment) -> NSMutableParagraphStyle {
        self.alignment = value
        return self
    }
}

extension String.SubSequence {

    func splitCamelCase() -> String {
        return "\(self)".splitCamelCase()
    }
}
