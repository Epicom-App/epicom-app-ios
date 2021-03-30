//
//  LoadingView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 22.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

final class LoadingView: ExtractableView {

    struct Style {
        let cornerRadius: CGFloat = 18.0
        let bgColor: UIColor = UIColor.black.withAlphaComponent(0.5)
        let loadingShieldColor: UIColor = DynamicColor.defaultBackgroundColor
        let loadingIndicatorColor: UIColor = DynamicColor.secondaryTextColor
        let textColor: UIColor = DynamicColor.defaultTextColor
        let textFont = UIFont.systemFont(ofSize: 17.0, weight: .semibold)
    }

    @IBOutlet private weak var loadingIndicator: UIActivityIndicatorView!
    @IBOutlet private weak var loadingShield: UIView!
    @IBOutlet private weak var loadingLabel: UILabel!

    override func willMove(toSuperview newSuperview: UIView?) {
        super.willMove(toSuperview: newSuperview)
        newSuperview.map { _ in self.baseSetup() }
    }

    private func baseSetup() {
        self.loadingIndicator.startAnimating()
        self.loadingLabel.text = L10n.Localizable.loadingText
        self.applyStyle(style: Style())
        self.performAnimations()
    }

    private func applyStyle(style: Style) {
        self.backgroundColor = style.bgColor
        self.loadingIndicator.color = style.loadingIndicatorColor
        self.loadingShield.backgroundColor = style.loadingShieldColor
        self.loadingShield.layer.cornerRadius = style.cornerRadius
        self.loadingShield.layer.masksToBounds = true
        self.loadingLabel.font = style.textFont
        self.loadingLabel.textColor = style.textColor
    }

    private func performAnimations() {
        var text = self.loadingLabel.text ?? ""
        let dotsCount = text.filter { $0 == "." }.count
        if dotsCount == 3 {
            text.removeAll(where: { $0 == "." })
            self.loadingLabel.text = text
        } else {
            self.loadingLabel.text = text + "."
        }
        Timer.scheduledTimer(withTimeInterval: 0.5, repeats: false) { [weak self] _ in self?.performAnimations() }
    }
}

// MARK: - Presentation

extension LoadingView {

    static func showLoading(on view: UIView, after: TimeInterval) {
        if let loadingView = self.findLoadingView(in: view) {
            loadingView.tag += 1
            loadingView.superview.map { $0.bringSubviewToFront(loadingView) }
        } else {
            let loadingView = LoadingView()
            loadingView.alpha = 0.0
            view.addSubview(loadingView)
            loadingView.bindToSuperview()
            view.layoutIfNeeded()

            // Show after delay
            delay(after) {
                guard let loadingView = self.findLoadingView(in: view) else {
                    return
                }
                UIView.animate(withDuration: 0.2) {
                    loadingView.alpha = 1.0
                }
            }
        }
    }

    static func hideLoading(on view: UIView) {
        guard let loadingView = self.findLoadingView(in: view) else {
            return
        }
        if loadingView.tag == 0 {
            UIView.animate(withDuration: 0.2, animations: {
                loadingView.alpha = 0.0
            }, completion: { _ in
                loadingView.removeFromSuperview()
            })
        }
        loadingView.tag -= 1
    }

    private static func findLoadingView(in view: UIView) -> LoadingView? {
        let loadingViews: [LoadingView] = view.findSubviews()
        return loadingViews.first
    }
}
