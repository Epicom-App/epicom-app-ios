//
//  OnboardingActionView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 10.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

class OnboardingActionView: UIView, OnboardingView, ColorProviderProtocol {

    enum State {
        case notDetermined(buttonText: String, action: () -> Void)
        case enabled(infoText: String)
        case extendedEnabled(infoText: String, buttonText: String, action: () -> Void)
        case disabled(infoText: String, action: () -> Void)
        case loading
    }

    struct ViewModel {
        let topImage: UIImage
        let info: String
        let dataProtectionText: String
        let onDataProtectionTap: () -> Void
    }

    var providedColor: UIColor {
        return DynamicColor.defaultTextColor
    }

    private var containerView = UIStackView()
    private var mainImageView = UIImageView()
    private var infoText = UILabel()
    private var dataProtectionButton = UIButton(type: .system)
    private var enableButtonContainer = UIView()
    private var enableButton = UIButton(type: .custom)
    private var enabledCheckmark = UIImageView()
    private var enabledInfoView = UIView()
    private var enabledInfoLabel = UILabel()
    private var loadingContainer = UIView()
    private var loadingIndicator = UIActivityIndicatorView(style: .gray)

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.setup()
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) is not implemented")
    }

    private func setup() {
        self.addSubview(self.containerView)
        self.containerView.bindToSuperview()
        self.containerView.axis = .vertical
        self.containerView.addArrangedSubview(self.configureTopImage())
        self.containerView.addArrangedSubview(self.configureInfoText())
        self.containerView.addArrangedSubview(self.configureDateProtectionButton())
        self.containerView.addArrangedSubview(self.configureLoadingIndicator())

        let wrapper = UIView()
        let enabledContainer = UIStackView()
        enabledContainer.axis = .vertical
        enabledContainer.addArrangedSubview(self.configureEnabledInfo())
        enabledContainer.addArrangedSubview(self.configureEnableButton())
        enabledContainer.center(in: wrapper, offset: self.relativeValue(16.0))
        
        self.containerView.addArrangedSubview(wrapper)
        self.containerView.addArrangedSubview(self.configureSpacer())
    }

    private func configureTopImage() -> UIView {
        let container = UIStackView()
        container.axis = .vertical

        let imageContainer = Configurator(UIView()).configure {
            $0.backgroundColor = ColorName.colorMain.color
            $0.heightAnchor.constraint(greaterThanOrEqualToConstant: 120.0).isActive = true
        }
        container.addArrangedSubview(imageContainer)

        imageContainer.addSubview(self.mainImageView)
        self.mainImageView.bindToSuperview(offset: self.relativeValue(30.0))
        self.mainImageView.contentMode = .scaleAspectFit
        self.mainImageView.setContentCompressionResistancePriority(.defaultLow, for: .vertical)
        self.mainImageView.setContentHuggingPriority(.defaultLow, for: .vertical)

        let trView = Configurator(DrawableView()).configure {
            $0.anchorPoints = [
                CGPoint(x: 0.0, y: 0.0),
                CGPoint(x: 1.0, y: 0.0),
                CGPoint(x: 1.0, y: 1.0)
            ]
            $0.fillColor = ColorName.colorMain.color
            $0.backgroundColor = .clear
            $0.heightAnchor.constraint(equalToConstant: self.relativeValue(30.0)).isActive = true
        }
        container.addArrangedSubview(trView)
        return container
    }

    private func configureInfoText() -> UIView {
        self.infoText.font = UIFont.systemFont(ofSize: self.relativeValue(17.0))
        self.infoText.adjustsFontSizeToFitWidth = true
        self.infoText.minimumScaleFactor = 0.6
        self.infoText.textColor = DynamicColor.tintMainColor
        self.infoText.numberOfLines = 0
        self.infoText.setContentCompressionResistancePriority(.defaultHigh, for: .vertical)
        self.infoText.setContentHuggingPriority(.required, for: .vertical)
        self.infoText.textAlignment = .center
        return self.infoText.wrap(insets: UIEdgeInsets(
            top: self.relativeValue(36.0),
            left: self.relativeValue(16.0),
            bottom: self.relativeValue(16.0),
            right: self.relativeValue(16.0))
        )
    }

    private func configureDateProtectionButton() -> UIView {
        let image = Asset.onboardingIconInfo.image
        self.dataProtectionButton.setImage(image.resizeToMaxSide(maxSize: self.relativeValue(image.size.width)), for: .normal)
        self.dataProtectionButton.titleEdgeInsets = UIEdgeInsets(top: 0.0, left: 20.0, bottom: 0.0, right: 0.0)
        self.dataProtectionButton.titleLabel?.font = UIFont.systemFont(ofSize: self.relativeValue(17.0), weight: .bold)
        self.dataProtectionButton.setTitleColor(DynamicColor.tintMainColor, for: .normal)
        self.dataProtectionButton.tintColor = DynamicColor.tintMainColor
        self.dataProtectionButton.setContentCompressionResistancePriority(.required, for: .vertical)
        return self.dataProtectionButton.wrap(insets: UIEdgeInsets(top: 4.0, left: 8.0, bottom: 4.0, right: 8.0))
    }

    private func configureEnabledInfo() -> UIView {
        let container = UIStackView()
        container.axis = .horizontal
        container.alignment = .center
        container.spacing = self.relativeValue(16.0)
        self.enabledCheckmark.image = Asset.onboardingIconCheckmark.image
        self.enabledCheckmark.tintColor = DynamicColor.tintMainColor
        self.enabledCheckmark.setContentCompressionResistancePriority(.required, for: .vertical)
        container.addArrangedSubview(self.enabledCheckmark)
        self.enabledInfoLabel.textColor = DynamicColor.tintMainColor
        self.enabledInfoLabel.font = UIFont.systemFont(ofSize: self.relativeValue(17.0))
        self.enabledInfoLabel.setContentCompressionResistancePriority(.required, for: .vertical)
        container.addArrangedSubview(self.enabledInfoLabel)
        container.center(in: self.enabledInfoView, offset: self.relativeValue(8.0), fixed: [.top, .bottom])
        return self.enabledInfoView
    }

    private func configureEnableButton() -> UIView {
        self.enableButton.setTitleColor(.white, for: .normal)
        self.enableButton.setBackgroundColor(ColorName.colorMain.color, for: .normal)
        self.enableButton.widthAnchor.constraint(equalToConstant: self.relativeValue(300.0)).isActive = true
        self.enableButton.heightAnchor.constraint(equalToConstant: self.relativeValue(48)).isActive = true
        self.enableButton.titleLabel?.font = UIFont.systemFont(ofSize: self.relativeValue(16), weight: .semibold)
        self.enableButton.layer.cornerRadius = 6
        self.enableButton.layer.masksToBounds = true
        self.enableButtonContainer.setContentHuggingPriority(.required, for: .vertical)
        self.enableButton.center(in: self.enableButtonContainer, offset: self.relativeValue(16.0), fixed: [.top, .bottom])
        return self.enableButtonContainer
    }

    private func configureLoadingIndicator() -> UIView {
        self.loadingIndicator.color = DynamicColor.tintMainColor
        self.loadingIndicator.center(in: self.loadingContainer, offset: self.relativeValue(16.0))
        return self.loadingContainer
    }

    private func configureSpacer() -> UIView {
        let view = UIView()
        view.heightAnchor.constraint(equalToConstant: self.relativeValue(32.0)).isActive = true
        return view
    }

    func configure(viewModel: ViewModel) {
        self.mainImageView.image = viewModel.topImage
        self.infoText.attributedText = viewModel.info.attributed([
            .paragraphStyle: NSMutableParagraphStyle().lineSpacing(self.relativeValue(4.0)).alignment(.center)
        ])
        self.dataProtectionButton.setTitle(viewModel.dataProtectionText, for: .normal)
        self.dataProtectionButton.addHandler(viewModel.onDataProtectionTap)
    }

    func update(state: State) {
        self.loadingIndicator.stopAnimating()
        self.loadingContainer.isHidden = true
        self.enabledInfoView.isHidden = true
        self.enableButtonContainer.isHidden = false

        switch state {
        case .notDetermined(let buttonText, let action):
            self.enableButton.setTitle(buttonText, for: .normal)
            self.enableButton.addHandler(action)
        case .enabled(let infoText):
            self.enabledInfoLabel.text = infoText
            self.enabledCheckmark.isHidden = false
            self.enabledInfoView.isHidden = false
            self.enableButtonContainer.isHidden = true
        case .extendedEnabled(let infoText, let buttonText, let action):
            self.enabledInfoLabel.text = infoText
            self.enabledCheckmark.isHidden = false
            self.enabledInfoView.isHidden = false
            self.enableButton.setTitle(buttonText, for: .normal)
            self.enableButton.addHandler(action)
        case .disabled(let infoText, let action):
            self.enabledInfoLabel.text = infoText
            self.enableButton.addHandler(action)
            self.enabledCheckmark.isHidden = true
            self.enabledInfoView.isHidden = false
            self.enableButton.setTitle(L10n.Localizable.onboardingSettingsButton, for: .normal)
        case .loading:
            self.enableButtonContainer.isHidden = true
            self.loadingContainer.isHidden = false
            self.loadingIndicator.startAnimating()
        }
    }
}

// MARK: Common actions

extension OnboardingActionView {

    func openSettings() {
        if let url = URL(string: UIApplication.openSettingsURLString), UIApplication.shared.canOpenURL(url) {
            UIApplication.shared.open(url, options: [:], completionHandler: nil)
        }
    }

    func presentDataProtection(presenter: UIViewController) {
        let dataPrivacyItem = Constants.StaticPages.dataPrivacyItem
        let webViewVC = WebViewControllerFactory.staticPageController(item: dataPrivacyItem)
        webViewVC.navigationItem.leftBarButtonItem = HandlerBarButtonItem(barButtonSystemItem: .cancel) { [weak webViewVC] in
            webViewVC?.dismiss(animated: true)
        }
        let navVC = UINavigationController(rootViewController: webViewVC)
        presenter.present(navVC, animated: true, completion: nil)
    }
}
