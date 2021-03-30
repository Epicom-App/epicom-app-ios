//
//  OnboardingMapInfoView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 10.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

final class OnboardingMapInfoView: UIView, TitleProviderProtocol, OnboardingView {

    var providedTitle: String {
        return L10n.Localizable.onboardingTitleCovidMap
    }

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.baseSetup()
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    private func baseSetup() {
        self.configureOnboardingBackground(from: 0.4)

        let containerView = UIStackView.vertical
        self.addSubview(containerView)
        containerView.bindToSuperview()
        let infoLabel = self.createTopInfoLabel()
        containerView.addArrangedSubview(infoLabel.wrap(offset: self.relativeValue(16.0)))

        let arrowImage = self.createTopArrowImage()
        containerView.addArrangedSubview(arrowImage.wrap(
            insets: UIEdgeInsets(top: 0, left: self.relativeValue(106), bottom: 0, right: 0),
            fixed: [.top, .leading, .bottom])
        )

        let mapExample = self.createMapImage()
        containerView.addArrangedSubview(mapExample.wrap(offset: self.relativeValue(16.0), fixed: [.top, .leading, .bottom]))

        let horizontalStack = UIStackView.horizontal
        horizontalStack.spacing = self.relativeValue(60.0)
        horizontalStack.alignment = .bottom

        let downArrowImage = self.createDownArrowImage()
        horizontalStack.addArrangedSubview(downArrowImage)

        let mapInfoLabel = self.createMapInfoLabel()
        horizontalStack.addArrangedSubview(mapInfoLabel)

        let horizontalContainer = UIView()
        horizontalStack.center(in: horizontalContainer, fixed: [.top, .bottom])
        containerView.addArrangedSubview(horizontalContainer)

        let bottomArrowImage = self.createBottomArrowImage()
        containerView.addArrangedSubview(bottomArrowImage.wrap(
            insets: UIEdgeInsets(top: 0, left: 0.0, bottom: self.relativeValue(12), right: self.relativeValue(66)),
            fixed: [.top, .trailing, .bottom])
        )

        let onboardingMapInfoImageView = self.createMapInfoImage()
        containerView.addArrangedSubview(onboardingMapInfoImageView)

        let spacer = UIView()
        spacer.heightAnchor.constraint(greaterThanOrEqualToConstant: self.relativeValue(32.0)).isActive = true
        containerView.addArrangedSubview(spacer)
    }

    private func createMapInfoImage() -> UIImageView {
        let onboardingMapInfoImage = Asset.onboardingMapInfoView.image
        let onboardingMapInfoImageView = UIImageView(image: onboardingMapInfoImage)
        onboardingMapInfoImageView.contentMode = .scaleAspectFit
        onboardingMapInfoImageView.heightAnchor.constraint(
            greaterThanOrEqualToConstant: self.relativeValue(onboardingMapInfoImage.size.height) / 1.5
        ).isActive = true
        return onboardingMapInfoImageView
    }

    private func createBottomArrowImage() -> UIImageView {
        let bottomArrowImage = UIImageView()
        bottomArrowImage.image = Asset.onbArrowTopLeftSmall.image
        bottomArrowImage.contentMode = .scaleAspectFit
        bottomArrowImage.tintColor = .white
        bottomArrowImage.setContentCompressionResistancePriority(.required, for: .vertical)
        return bottomArrowImage
    }

    private func createMapInfoLabel() -> UILabel {
        let mapInfoLabel = UILabel()
        mapInfoLabel.numberOfLines = 0
        mapInfoLabel.textColor = .white
        mapInfoLabel.font = UIFont.systemFont(ofSize: self.relativeValue(17.0))
        mapInfoLabel.text = L10n.Localizable.onboardingInfoBundesland
        mapInfoLabel.widthAnchor.constraint(equalToConstant: self.relativeValue(160.0)).isActive = true
        mapInfoLabel.setContentCompressionResistancePriority(.required, for: .vertical)
        return mapInfoLabel
    }

    private func createDownArrowImage() -> UIImageView {
        let onbArrowBottomBig = Asset.onbArrowBottomBig.image
        let downArrowImage = UIImageView(image: onbArrowBottomBig)
        downArrowImage.heightAnchor.constraint(
            lessThanOrEqualToConstant: self.relativeValue(onbArrowBottomBig.size.height)
        ).isActive = true
        downArrowImage.widthAnchor.constraint(
            equalToConstant: self.relativeValue(onbArrowBottomBig.size.width)
        ).isActive = true
        downArrowImage.tintColor = .white
        downArrowImage.contentMode = .scaleAspectFit
        return downArrowImage
    }

    private func createMapImage() -> UIImageView {
        let mapImage = Asset.onboardingMapExample.image
        let mapExample = UIImageView()
        mapExample.image = mapImage
        mapExample.widthAnchor.constraint(
            equalTo: mapExample.heightAnchor,
            multiplier: mapImage.size.width / mapImage.size.height
        ).isActive = true
        mapExample.heightAnchor.constraint(
            greaterThanOrEqualToConstant: self.relativeValue(mapImage.size.height) / 2.0
        ).isActive = true
        return mapExample
    }

    private func createTopArrowImage() -> UIImageView {
        let arrowImage = UIImageView()
        arrowImage.image = Asset.onbArrowBottomRightBig.image
        arrowImage.contentMode = .scaleAspectFit
        arrowImage.tintColor = DynamicColor.defaultIconsColor
        arrowImage.setContentCompressionResistancePriority(.required, for: .vertical)
        return arrowImage
    }

    private func createTopInfoLabel() -> UILabel {
        let infoLabel = UILabel()
        infoLabel.numberOfLines = 0
        infoLabel.font = UIFont.systemFont(ofSize: self.relativeValue(17.0))
        infoLabel.textColor = DynamicColor.tintMainColor
        infoLabel.text = L10n.Localizable.onboardingInfoMapRegion
        infoLabel.setContentCompressionResistancePriority(.required, for: .vertical)
        return infoLabel
    }
}

protocol OnboardingView: UIView {}
extension OnboardingView {
    func configureOnboardingBackground(from: CGFloat) {
        let bgView = DrawableView()
        self.addSubview(bgView)

        bgView.anchorPoints = [
            CGPoint(x: 0.0, y: from),
            CGPoint(x: 1.0, y: from - 0.1),
            CGPoint(x: 1.0, y: 1.0),
            CGPoint(x: 0.0, y: 1.0)
        ]
        bgView.fillColor = ColorName.colorMain.color
        bgView.backgroundColor = .clear
        bgView.bindToSuperview()
    }

    func relativeValue(_ value: CGFloat) -> CGFloat {
        let multiplier = UIScreen.main.bounds.width / 375.0
        return value * multiplier
    }
}
