//
//  ContainerInfoView.swift
//  EbolappWidgetExtension
//
//  Created by Igor Tiukavkin on 12.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import WidgetKit
import SwiftUI

struct ContainerInfoView: View {
    
    struct Data {
        let name: String
        let value: String
        let maxValue: String?
        let textColor: SwiftUI.Color
        let backgroundColor: SwiftUI.Color
        let borderColor: SwiftUI.Color
    }
    
    private let data: Data
    
    init(data: Data) {
        self.data = data
    }
    
    var body: some View {
        GeometryReader { g in
            HStack(alignment: .lastTextBaseline, spacing: 0) {
                Text(data.name)
                    .font(Font.system(size: g.size.width * 0.08).weight(.bold))
                    .multilineTextAlignment(.leading)
                Spacer()
                Group {
                    Text(data.value)
                        .font(Font.system(size: g.size.width * 0.18).weight(.bold)) +
                        self.createMaxValueTextItem(value: data.maxValue, width: g.size.width)
                }.multilineTextAlignment(.trailing)
            }
            .padding([.leading, .trailing], g.size.width * 0.08)
            .padding([.top, .bottom], g.size.width * 0.03)
            .foregroundColor(data.textColor)
            .frame(maxWidth: .infinity, maxHeight: .infinity)
            .background(
                RoundedRectangle(cornerRadius: g.size.width * 0.08)
                    .stroke(data.borderColor, lineWidth: 2)
                    .background(
                        RoundedRectangle(cornerRadius: g.size.width * 0.08)
                            .fill(data.backgroundColor)
                    )
            )
        }
    }

    private func createMaxValueTextItem(value: String?, width: CGFloat) -> Text {
        return value.map {
            Text($0).font(Font.system(size: width * 0.08).weight(.bold))
        } ?? Text("")
    }
}

struct ContainerInfoView_Previews: PreviewProvider {
    
    static var previews: some View {
        Group {
            
            ContainerInfoView(data: .cases(value: "550"))
                .padding()
                .previewDisplayName("Cases preview")
            
            ContainerInfoView(data: .severity(value: "2", maxValue: "5", color: .green))
                .padding()
                .previewDisplayName("Severity preview")
            
        }.previewContext(WidgetPreviewContext(family: .systemSmall))
    }
}

extension ContainerInfoView.Data {
    
    static func cases(value: String) -> Self {
        return .init(
            name: L10n.Localizable.mapRegionCases,
            value: value,
            maxValue: nil,
            textColor: .primary,
            backgroundColor: .clear,
            borderColor: .primary
        )
    }
    
    static func severity(value: String, maxValue: String, color: SwiftUI.Color) -> Self {
        return .init(
            name: L10n.Localizable.mapRegionDangerLevel,
            value: value,
            maxValue: "/" + maxValue,
            textColor: UIColor(color).isLight ? .black : .white,
            backgroundColor: color,
            borderColor: color
        )
    }

    static func cases(entry: WidgetContent) -> Self {
        switch entry {
        case .content(let content):
            return self.cases(value: content.casesNumber)
        default:
            return self.cases(value: "-")
        }
    }

    static func severity(entry: WidgetContent) -> Self {
        switch entry {
        case .content(let content):
            return self.severity(value: content.severity, maxValue: content.maxSeverity, color: content.color)
        default:
            return self.severity(value: "-", maxValue: "-", color: .gray)
        }
    }
}
