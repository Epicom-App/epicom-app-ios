//
//  OnboardingSeverityView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 10.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

final class OnboardingSeverityView: UIView, OnboardingView, TitleProviderProtocol, ColorProviderProtocol {

    var providedTitle: String {
        return L10n.Localizable.onboardingTitleCovidMap
    }

    var providedColor: UIColor {
        return DynamicColor.defaultTextColor
    }

    private lazy var service = RiskAreaServiceFactory.createGetLegend(output: self)

    private var arrowTopConstraint: NSLayoutConstraint?
    private var labelHeightConstraint: NSLayoutConstraint?

    private var containerTopConstraint: NSLayoutConstraint?
    private let containerView = UIStackView.vertical
    private let scrollView = UIScrollView()
    private let disticter = Distincter<CGFloat>()

    var alignToSafeAreaMargin: Bool = false
    var extraBottomMargin: CGFloat = 0.0

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.baseSetup()
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    private func baseSetup() {
        self.addSubview(self.scrollView)
        self.scrollView.bindToSuperview()

        self.containerView.alignment = .center
        self.containerView.spacing = 8.0

        self.scrollView.addSubview(self.containerView)
        self.containerView.translatesAutoresizingMaskIntoConstraints = false

        self.containerTopConstraint = self.containerView.topAnchor.constraint(equalTo: self.scrollView.topAnchor)
        self.containerTopConstraint?.isActive = true

        self.containerView.widthAnchor.constraint(equalTo: self.scrollView.widthAnchor).isActive = true
        self.containerView.leadingAnchor.constraint(equalTo: self.scrollView.leadingAnchor).isActive = true
        self.containerView.trailingAnchor.constraint(equalTo: self.scrollView.trailingAnchor).isActive = true

        self.containerView.bottomAnchor.constraint(
            greaterThanOrEqualTo: self.scrollView.bottomAnchor,
            constant: -20.0 - self.relativeValue(16.0)
        ).isActive = true
        let bottom = self.containerView.bottomAnchor.constraint(
            equalTo: self.scrollView.bottomAnchor,
            constant: -20.0 - self.relativeValue(16.0)
        )
        bottom.priority = .defaultLow
        bottom.isActive = true

        self.loadItems()
        self.setupOverlay()
    }

    private func setupOverlay() {
        let bgView = DrawableView(anchorPoints: [
            CGPoint(x: 0.0, y: 0.0),
            CGPoint(x: 1.0, y: 0.0),
            CGPoint(x: 1.0, y: 0.18),
            CGPoint(x: 0.0, y: 0.2)
        ])
        bgView.fillColor = ColorName.colorMain.color
        bgView.backgroundColor = .clear
        bgView.isUserInteractionEnabled = false
        self.addSubview(bgView)
        bgView.bindToSuperview()

        let infoLabel = UILabel()
        infoLabel.numberOfLines = 0
        infoLabel.font = UIFont.systemFont(ofSize: self.relativeValue(17.0))
        infoLabel.textColor = .white
        infoLabel.text = L10n.Localizable.onboardingInfoColors
        infoLabel.setContentCompressionResistancePriority(.required, for: .vertical)
        self.addSubview(infoLabel)

        infoLabel.translatesAutoresizingMaskIntoConstraints = false
        infoLabel.topAnchor.constraint(equalTo: self.topAnchor).isActive = true
        infoLabel.leadingAnchor.constraint(equalTo: self.leadingAnchor, constant: self.relativeValue(16.0)).isActive = true
        infoLabel.trailingAnchor.constraint(equalTo: self.trailingAnchor, constant: -self.relativeValue(16.0)).isActive = true
        self.labelHeightConstraint = infoLabel.heightAnchor.constraint(equalToConstant: 0)
        self.labelHeightConstraint?.isActive = true

        let bottomArrow = UIImageView(image: Asset.onbArrowBottomBig.image)
        bottomArrow.tintColor = ColorName.colorMain.color
        bottomArrow.contentMode = .bottom
        bottomArrow.clipsToBounds = true
        bottomArrow.heightAnchor.constraint(equalToConstant: 25).isActive = true
        self.addSubview(bottomArrow)
        bottomArrow.translatesAutoresizingMaskIntoConstraints = false
        self.arrowTopConstraint = bottomArrow.topAnchor.constraint(equalTo: self.topAnchor, constant: 0)
        self.arrowTopConstraint?.isActive = true
        bottomArrow.centerXAnchor.constraint(equalTo: self.centerXAnchor).isActive = true
    }

    override func layoutSubviews() {
        super.layoutSubviews()
        self.arrowTopConstraint?.constant = self.bounds.height * 0.19 - 1
        self.labelHeightConstraint?.constant = self.bounds.height * 0.19
        self.containerTopConstraint?.constant = self.bounds.height * 0.19 + 25.0 + self.relativeValue(12.0)
        let constant = self.extraBottomMargin + (self.alignToSafeAreaMargin ? self.safeAreaInsets.bottom : 0.0)
        self.disticter.distinct(value: constant) {
            let bottomConstraint = self.constraints.filter { $0.firstAttribute == .bottom && $0.firstItem is UIScrollView }.first
            bottomConstraint?.constant = -constant
        }
    }

    private func loadItems() {
        let loadingIndicator = UIActivityIndicatorView(style: .gray)
        loadingIndicator.color = DynamicColor.defaultTextColor
        loadingIndicator.startAnimating()
        self.containerView.removeAllArrangedSubviews()
        self.containerView.addArrangedSubview(loadingIndicator)
        self.service.getLegend()
    }
}

extension OnboardingSeverityView: UpdateLegendOutput {

    func updateLegend(legend: MapRegionLegendModel) {
        self.containerView.removeAllArrangedSubviews()
        let maxSeverity = legend.items.max(by: { $0.severity < $1.severity })?.severity ?? 0
        legend.items.reversed().forEach {
            let view = self.createSeverityItem(item: $0, maxSeverity: maxSeverity)
            self.containerView.addArrangedSubview(view)
        }
        let spacer = UIView()
        spacer.backgroundColor = .clear
        self.containerView.addArrangedSubview(spacer)
    }

    private func createSeverityItem(item: MapRegionLegendItemModel, maxSeverity: Int) -> UIView {
        let horizontalContainer = UIStackView.horizontal
        horizontalContainer.alignment = .center
        horizontalContainer.spacing = 8.0

        let isRiskyMark = RiskMatchExclamationMark()
        isRiskyMark.alpha = item.isRisky ? 1.0 : 0.0
        horizontalContainer.addArrangedSubview(isRiskyMark)

        let itemView = UIView()
        itemView.backgroundColor = item.color
        itemView.layer.masksToBounds = true
        itemView.layer.cornerRadius = 8.0
        itemView.widthAnchor.constraint(equalToConstant: 140.0).isActive = true
        itemView.heightAnchor.constraint(equalToConstant: 50.0).isActive = true

        let itemViewInfo = UILabel()
        itemViewInfo.numberOfLines = 2
        itemViewInfo.textColor = item.color.isLight ? .black : .white
        itemViewInfo.text = L10n.Localizable.mapRegionDangerLevel
        itemViewInfo.font = UIFont.systemFont(ofSize: 10.0, weight: .bold)
        itemViewInfo.textAlignment = .left

        let itemViewValue = UILabel()
        itemViewValue.font = UIFont.systemFont(ofSize: 28.0, weight: .bold)
        itemViewValue.attributedText = SeverityInfo(
            severity: "\(item.severity)",
            maxSeverity: "\(maxSeverity)"
        ).createSeverityAttributedString(bigFontSize: 28, smallFontSize: 10, bgColor: item.color)
        itemViewValue.textAlignment = .right

        let valuesContainer = UIStackView.horizontal
        valuesContainer.alignment = .lastBaseline
        valuesContainer.spacing = 8.0

        valuesContainer.addArrangedSubview(itemViewInfo)
        valuesContainer.addArrangedSubview(itemViewValue)

        itemView.addSubview(valuesContainer)
        valuesContainer.bindToSuperview(offset: 8.0)

        horizontalContainer.addArrangedSubview(itemView)

        let infoLabel = UILabel()
        infoLabel.textColor = DynamicColor.secondaryTextColor
        infoLabel.font = UIFont.systemFont(ofSize: 15.0)
        infoLabel.text = item.info
        infoLabel.textAlignment = .left
        infoLabel.widthAnchor.constraint(equalToConstant: 140.0).isActive = true

        horizontalContainer.addArrangedSubview(infoLabel)

        return horizontalContainer
    }
}

private struct SeverityInfo: CreateSeverityAttributedString {
    let severity: String
    let maxSeverity: String
}
