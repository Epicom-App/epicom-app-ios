//
//  EbolappWidget.swift
//  EbolappWidget
//
//  Created by Igor Tiukavkin on 12.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import WidgetKit
import SwiftUI

struct EbolappWidgetEntryView: View {
    
    var entry: WidgetProvider.Entry
    
    var casesData: ContainerInfoView.Data {
        .cases(entry: self.entry)
    }
    
    var severityData: ContainerInfoView.Data {
        .severity(entry: self.entry)
    }

    @Environment(\.colorScheme) var colorScheme

    var body: some View {
        Group {
            switch entry {
            case .content(let content):
                self.create(entry: content)
            case .noData:
                self.noData()
            case .noLocation:
                self.noLocation()
            }
        }
    }

    private func create(entry: WidgetContent.Content) -> some View {
        GeometryReader { g in
            VStack(alignment: .leading, spacing: 0) {

                Text(entry.name)
                    .lineLimit(1)
                    .foregroundColor(
                        colorScheme == .dark ?
                            SwiftUI.Color.white :
                            SwiftUI.Color(ColorName.colorMain.color)
                    )
                    .font(Font.system(size: g.size.width * 0.1).weight(.bold))

                Text(entry.disease)
                    .lineLimit(1)
                    .foregroundColor(.primary)
                    .font(Font.system(size: g.size.width * 0.06).weight(.semibold))

                Spacer().frame(height: g.size.width * 0.03)

                ContainerInfoView(data: casesData)

                Spacer().frame(height: g.size.width * 0.04)

                ContainerInfoView(data: severityData)

                Spacer().frame(height: g.size.width * 0.03)

                Text(entry.severityInfo)
                    .lineLimit(2)
                    .font(.system(size: g.size.width * 0.05))
                    .foregroundColor(
                        colorScheme == .dark ?
                            SwiftUI.Color(UIColor.lightGray) :
                            SwiftUI.Color(UIColor.systemGray)
                    )

            }
            .padding([.leading, .trailing], g.size.width * 0.08)
            .padding([.top, .bottom], g.size.width * 0.06)
            .background(SwiftUI.Color(UIColor.systemBackground))
        }
    }

    private func noData() -> some View {
        self.info(text: L10n.Localizable.widgetInfoNoCasesData)
    }

    private func noLocation() -> some View {
        self.info(text: L10n.Localizable.widgetInfoNoLocationData)
    }

    private func info(text: String) -> some View {
        ZStack {
            Rectangle()
                .fill(SwiftUI.Color(UIColor.systemBackground))
            Text(text)
                .font(.subheadline)
                .padding()
        }.multilineTextAlignment(.center)
    }
}

@main
struct EbolappWidget: Widget {
    let kind: String = "EbolappWidget"

    var body: some WidgetConfiguration {
        StaticConfiguration(kind: kind, provider: WidgetProvider()) { entry in
            EbolappWidgetEntryView(entry: entry)
        }
        .configurationDisplayName(L10n.Localizable.widgetName)
        .description(L10n.Localizable.widgetDescription)
        .supportedFamilies([.systemSmall])
    }
}

struct EbolappWidget_Previews: PreviewProvider {
    
    static var previews: some View {

        EbolappWidgetEntryView(entry: WidgetContent.placeholder)
            .previewContext(WidgetPreviewContext(family: .systemSmall))

        EbolappWidgetEntryView(entry: WidgetContent.placeholder)
            .environment(\.colorScheme, .dark)
            .previewContext(WidgetPreviewContext(family: .systemSmall))

        EbolappWidgetEntryView(entry: .noData)
            .previewContext(WidgetPreviewContext(family: .systemSmall))

        EbolappWidgetEntryView(entry: .noLocation)
            .environment(\.colorScheme, .dark)
            .previewContext(WidgetPreviewContext(family: .systemSmall))

    }
}
