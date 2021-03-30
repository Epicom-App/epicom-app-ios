//
//  MapInfoView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 19.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

protocol MapRegionInfoViewInput: class {
    func update(viewModel: MapRegionInfoView.ViewModel)
    func setupLoading(isLoading: Bool)
}

protocol MapRegionInfoViewOutput: class {
    func didTapInfoURL(url: String, name: String)
    func didTapOnSeverityView()
}

final class MapRegionInfoView: ExtractableView {
    
    struct ViewModel {
        let title: String
        let subtitle: String
        let info: String
        let casesDescription: String
        let cases: String
        let severity: NSAttributedString
        let severityColor: UIColor
        let infoLink: String?
    }
    
    struct Style {
        let cornerRadius: CGFloat = 8.0
        let bgColor: UIColor = DynamicColor.defaultBackgroundColor
        let titleColor = DynamicColor.tintMainColor
        let titleFont = UIFont.systemFont(ofSize: 20.0, weight: .bold)
        let subtitleColor = DynamicColor.defaultTextColor
        let subtitleFont = UIFont.systemFont(ofSize: 14.0, weight: .bold)
        let secondaryTextFont = UIFont.systemFont(ofSize: 12.0)
        let secondaryTextColor = DynamicColor.secondaryTextColor
        let itemsInfoFont = UIFont.systemFont(ofSize: 11.0, weight: .bold)
        let itemsValueFont = UIFont.systemFont(ofSize: 31.0, weight: .bold)
        let leftItemTextColor = DynamicColor.defaultTextColor
        let infoButtonFont = UIFont.systemFont(ofSize: 14.0, weight: .bold)
        let infoButtonColor = DynamicColor.tintMainColor
    }
    
    @IBOutlet weak var loadingView: UIActivityIndicatorView!
    @IBOutlet weak var containerView: UIView!
    @IBOutlet weak var titleLabel: UILabel!
    @IBOutlet weak var infoButton: UIButton!
    @IBOutlet weak var subtitleLabel: UILabel!
    @IBOutlet weak var infoLabel: UILabel!
    @IBOutlet weak var casesDescriptionLabel: UILabel!
    
    @IBOutlet weak var leftItemContainer: UIView!
    @IBOutlet weak var leftItemInfo: UILabel!
    @IBOutlet weak var leftItemValue: UILabel!
    
    @IBOutlet weak var rightItemContainer: UIView!
    @IBOutlet weak var rightItemInfo: UILabel!
    @IBOutlet weak var rightItemValue: UILabel!
    
    private var style = Style()
    weak var output: MapRegionInfoViewOutput?
    
    override func willMove(toSuperview newSuperview: UIView?) {
        super.willMove(toSuperview: newSuperview)
        newSuperview.map { _ in
            self.applyStyle(style: self.style)
            self.setupAccessibility()
        }
    }
    
    private func applyStyle(style: Style) {
        self.style = style
        self.titleLabel.textColor = style.titleColor
        self.titleLabel.font = style.titleFont
        self.subtitleLabel.textColor = style.subtitleColor
        self.subtitleLabel.font = style.subtitleFont
        self.infoLabel.font = style.secondaryTextFont
        self.infoLabel.textColor = style.secondaryTextColor
        self.casesDescriptionLabel.font = style.secondaryTextFont
        self.casesDescriptionLabel.textColor = style.secondaryTextColor
        self.leftItemValue.font = style.itemsValueFont
        self.leftItemInfo.font = style.itemsInfoFont
        self.rightItemInfo.font = style.itemsInfoFont
        self.leftItemContainer.layer.cornerRadius = 8.0
        self.leftItemContainer.layer.borderColor = style.leftItemTextColor.cgColor
        self.leftItemContainer.layer.borderWidth = 1.0
        self.leftItemContainer.layer.masksToBounds = true
        self.leftItemContainer.backgroundColor = .clear
        self.leftItemInfo.textColor = style.leftItemTextColor
        self.leftItemInfo.text = L10n.Localizable.mapRegionCases
        self.leftItemInfo.numberOfLines = 2
        self.leftItemValue.textColor = style.leftItemTextColor
        self.rightItemContainer.layer.cornerRadius = 8.0
        self.rightItemContainer.layer.masksToBounds = true
        self.rightItemInfo.text = L10n.Localizable.mapRegionDangerLevel
        self.rightItemInfo.numberOfLines = 2
        self.infoButton.titleLabel?.font = style.infoButtonFont
        self.infoButton.tintColor = style.infoButtonColor
        self.infoButton.setTitleColor(style.infoButtonColor, for: .normal)
        self.infoButton.setTitle(L10n.Localizable.mapRegionInfoLinkName, for: .normal)
        self.loadingView.color = DynamicColor.defaultIconsColor
        self.layer.cornerRadius = style.cornerRadius
        self.addDefaultShadow()
        self.backgroundColor = style.bgColor
    }
    
    private func setupAccessibility() {
        
        let elementReadingOrder = [self.titleLabel,
                                   self.subtitleLabel,
                                   self.infoButton,
                                   self.leftItemInfo,
                                   self.leftItemValue,
                                   self.infoLabel,
                                   self.rightItemInfo,
                                   self.rightItemValue,
                                   self.casesDescriptionLabel]
        self.accessibilityElements = elementReadingOrder.map({$0 as Any})
        
        self.infoButton.accessibilityHint = L10n.Localizable.contentDescriptionAdditionalInformation
    }

    @IBAction private func onTapOnSeverityView() {
        self.rightItemContainer.alpha = 0.5
        UIView.animate(withDuration: 0.2) { [weak self] in
            self?.rightItemContainer.alpha = 1.0
        }
        self.output?.didTapOnSeverityView()
    }
}

// MARK: - RiskAreaInfoViewInput

extension MapRegionInfoView: MapRegionInfoViewInput {
    
    func update(viewModel: ViewModel) {
        self.titleLabel.text = viewModel.title
        self.subtitleLabel.text = viewModel.subtitle
        self.infoLabel.text = viewModel.info
        self.leftItemValue.text = viewModel.cases
        self.rightItemValue.attributedText = viewModel.severity
        self.rightItemContainer.backgroundColor = viewModel.severityColor
        self.rightItemInfo.textColor = viewModel.severityColor.isLight ? .black : .white
        self.casesDescriptionLabel.text = viewModel.casesDescription
        self.infoButton.isHidden = viewModel.infoLink == nil
        viewModel.infoLink.map { url in
            self.infoButton.addHandler { [weak self] in
                self?.output?.didTapInfoURL(url: url, name: L10n.Localizable.mapRegionInfoLinkName)
            }
        }
    }
    
    func setupLoading(isLoading: Bool) {
        isLoading ? self.loadingView.startAnimating() : self.loadingView.stopAnimating()
        self.containerView.isHidden = isLoading
        self.loadingView.isHidden = !isLoading
    }
}

extension MapRegionInfoView.ViewModel {

    init(info: MapRegionInfoModel) {
        self.title = info.name
        self.subtitle = info.disease
        self.info = info.severityInfo
        self.casesDescription = info.casesNumberInfo
        self.cases = "\(info.casesNumber)"
        self.severity = info.createSeverityAttributedString(bigFontSize: 31, smallFontSize: 11, bgColor: info.color)
        self.severityColor = info.color
        self.infoLink = info.infoLink
    }
}
