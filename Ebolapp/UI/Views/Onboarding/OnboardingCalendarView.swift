//
//  OnboardingCalendarView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 10.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

final class OnboardingCalendarView: UIView, TitleProviderProtocol, OnboardingView {

    var providedTitle: String {
        return L10n.Localizable.onboardingTitleCovidMap
    }
    
    private var arrowTopConstraint: NSLayoutConstraint?
    private var containerTopConstraint: NSLayoutConstraint?

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.baseSetup()
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    private func baseSetup() {
        self.configureOnboardingBackground(from: 0.3)

        let containerView = UIStackView.vertical
        self.addSubview(containerView)
        containerView.bindToSuperview()

        let infoLabel = self.createTopInfoLabel()
        containerView.addArrangedSubview(infoLabel.wrap(offset: self.relativeValue(16.0)))

        let calendarButton = self.createCalendarButton()
        let heightOffset = max((48.0 - self.relativeValue(48.0))*2, 0.0)
        containerView.addArrangedSubview(calendarButton.center(
            in: UIView(),
            offset: self.relativeValue(8 - heightOffset),
            fixed: [.top, .bottom]
        ))

        let multiplier = self.relativeValue(1.0)
        if  multiplier < 1.0 {
            calendarButton.transform = CGAffineTransform(scaleX: multiplier, y: multiplier)
        }

        self.configureBottomArrow()
        containerView.addArrangedSubview(self.createSpacer())

        let bottomContainer = self.createBottomContainer()
        let onboardingCalendarImageView = self.createCalendarImage()
        bottomContainer.addArrangedSubview(onboardingCalendarImageView)

        let mapInfoLabel = self.createMapInfoLabel()
        bottomContainer.addArrangedSubview(mapInfoLabel.wrap(insets: UIEdgeInsets(
            top: self.relativeValue(20.0),
            left: self.relativeValue(16.0),
            bottom: 0.0,
            right: self.relativeValue(16.0)))
        )

        let bottomArrowImage = self.createBottomArrowImage()
        bottomContainer.addArrangedSubview(bottomArrowImage.wrap(
            insets: UIEdgeInsets(top: 0, left: 0.0, bottom: self.relativeValue(12), right: self.relativeValue(80)),
            fixed: [.top, .trailing, .bottom])
        )

        let onboardingRiskMapImageView = self.createOnboardingRiskMapImage()
        bottomContainer.addArrangedSubview(onboardingRiskMapImageView)
        bottomContainer.addArrangedSubview(self.createSpacer())
    }

    private func createOnboardingRiskMapImage() -> UIImageView {
        let onboardingRiskMapImage = Asset.onboardingRiskMapExample.image
        let onboardingRiskMapImageView = UIImageView(image: onboardingRiskMapImage)
        onboardingRiskMapImageView.contentMode = .scaleAspectFit
        onboardingRiskMapImageView.heightAnchor.constraint(
            greaterThanOrEqualToConstant: self.relativeValue(onboardingRiskMapImage.size.height) * 0.8
        ).isActive = true
        return onboardingRiskMapImageView
    }

    private func createBottomArrowImage() -> UIImageView {
        let bottomArrowImage = UIImageView()
        bottomArrowImage.image = Asset.onbArrowBottomRightSmall.image
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
        mapInfoLabel.text = L10n.Localizable.onboardingInfoLocations
        mapInfoLabel.setContentCompressionResistancePriority(.required, for: .vertical)
        return mapInfoLabel
    }

    private func createCalendarImage() -> UIImageView {
        let onboardingCalendarImage = Asset.onboardingCalendarImage.image
        let onboardingCalendarImageView = UIImageView(image: onboardingCalendarImage)
        onboardingCalendarImageView.contentMode = .scaleAspectFit
        onboardingCalendarImageView.heightAnchor.constraint(
            greaterThanOrEqualToConstant: self.relativeValue(onboardingCalendarImage.size.height) / 1.5
        ).isActive = true
        return onboardingCalendarImageView
    }

    private func createBottomContainer() -> UIStackView {
        let bottomContainer = UIStackView.vertical
        bottomContainer.translatesAutoresizingMaskIntoConstraints = false
        self.addSubview(bottomContainer)
        self.containerTopConstraint = bottomContainer.topAnchor.constraint(equalTo: self.topAnchor, constant: 0)
        self.containerTopConstraint?.isActive = true
        bottomContainer.leadingAnchor.constraint(equalTo: self.leadingAnchor, constant: 0).isActive = true
        bottomContainer.trailingAnchor.constraint(equalTo: self.trailingAnchor, constant: 0).isActive = true
        bottomContainer.bottomAnchor.constraint(equalTo: self.bottomAnchor, constant: 0).isActive = true
        return bottomContainer
    }

    private func configureBottomArrow() {
        let bottomArrow = UIImageView(image: Asset.onbArrowBottomBig.image)
        bottomArrow.tintColor = DynamicColor.defaultBackgroundColor
        bottomArrow.contentMode = .bottom
        bottomArrow.clipsToBounds = true
        bottomArrow.heightAnchor.constraint(equalToConstant: 25).isActive = true
        self.addSubview(bottomArrow)
        bottomArrow.translatesAutoresizingMaskIntoConstraints = false
        self.arrowTopConstraint = bottomArrow.topAnchor.constraint(equalTo: self.topAnchor, constant: 0)
        self.arrowTopConstraint?.isActive = true
        bottomArrow.centerXAnchor.constraint(equalTo: self.centerXAnchor).isActive = true
    }

    private func createCalendarButton() -> UIView {
        let calendarButton = MapControlButton()
        calendarButton.isUserInteractionEnabled = false
        calendarButton.setImage(Asset.mapCalendarIcon.image, for: .normal)
        calendarButton.widthAnchor.constraint(equalToConstant: 60.0).isActive = true
        calendarButton.heightAnchor.constraint(equalToConstant: 48.0).isActive = true
        return calendarButton
    }

    private func createTopInfoLabel() -> UILabel {
        let infoLabel = UILabel()
        infoLabel.numberOfLines = 0
        infoLabel.font = UIFont.systemFont(ofSize: self.relativeValue(17.0))
        infoLabel.textColor = DynamicColor.tintMainColor
        infoLabel.text = L10n.Localizable.onboardingInfoCalendar
        infoLabel.setContentCompressionResistancePriority(.required, for: .vertical)
        return infoLabel
    }

    private func createSpacer() -> UIView {
        let spacer = UIView()
        spacer.heightAnchor.constraint(greaterThanOrEqualToConstant: self.relativeValue(32.0)).isActive = true
        return spacer
    }

    override func layoutSubviews() {
        super.layoutSubviews()
        self.arrowTopConstraint?.constant = self.bounds.size.height * 0.25 - 1
        self.containerTopConstraint?.constant = self.bounds.size.height * 0.25 + self.relativeValue(50.0)
    }
}
