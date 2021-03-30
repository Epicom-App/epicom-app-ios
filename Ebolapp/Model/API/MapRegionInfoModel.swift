//
// Created by Igor Tiukavkin on 03.11.20.
// Copyright (c) 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit
import UIColor_Hex_Swift

struct MapRegionInfoModel: Codable, CreateSeverityAttributedString {
    let id: String
    let name: String
    let severity: String
    let maxSeverity: String
    let severityInfo: String
    let colorRaw: String
    let casesNumber: Int
    let casesNumberInfo: String
    let disease: String
    let infoLink: String?
    
    var color: UIColor {
        return UIColor(self.colorRaw)
    }
}

protocol CreateSeverityAttributedString {
    var severity: String { get }
    var maxSeverity: String { get }
}

extension CreateSeverityAttributedString {

    func createSeverityAttributedString(bigFontSize: CGFloat, smallFontSize: CGFloat, bgColor: UIColor) -> NSAttributedString {
        let severityString = NSMutableAttributedString(string: self.severity, attributes: Self.severityAttributes(fontSize: 31, bgColor: bgColor))
        let maxSeverityString = NSAttributedString(string: "/" + self.maxSeverity, attributes: Self.severityAttributes(fontSize: 11, bgColor: bgColor))
        severityString.append(maxSeverityString)
        return severityString
    }

    private static func severityAttributes(fontSize: CGFloat, bgColor: UIColor) -> [NSAttributedString.Key: Any] {
        return [.foregroundColor: bgColor.isLight ? UIColor.black : UIColor.white,
                .font: UIFont.systemFont(ofSize: fontSize, weight: .bold)]
    }
}
