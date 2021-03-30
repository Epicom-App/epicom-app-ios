//
//  SettingsWebViewController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 18.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit
import WebKit

class WebViewController: UIViewController {

    private let service: WebViewServiceInput
    private let webView = WKWebView()
    private let item: WebViewItem
    private let loadingIndicator = UIActivityIndicatorView()
    private let alertsHelper = AlertsHelperFactory.createErrorAlertsHelper()

    init(item: WebViewItem, service: WebViewServiceInput) {
        self.item = item
        self.service = service
        super.init(nibName: nil, bundle: nil)
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        self.navigationItem.title = self.item.settingsCellTitle
        self.setupWebView()
        self.setupLoadingIndicator()
        self.loadContent()
    }

    private func setupWebView() {
        self.view.addSubview(webView)
        self.webView.bindToSuperview()
    }

    private func setupLoadingIndicator() {
        self.loadingIndicator.center(in: self.view)
        self.loadingIndicator.color = ColorName.colorMain.color
    }

    private func stopLoading() {
        self.loadingIndicator.stopAnimating()
        self.loadingIndicator.isHidden = true
    }

    private func startLoading() {
        self.loadingIndicator.startAnimating()
        self.loadingIndicator.isHidden = false
    }

    private func loadContent() {
        self.service.load(url: self.item.url, in: self.webView)
        self.startLoading()
    }
}

extension WebViewController: WebViewServiceOutput {

    func didFinish() {
        self.stopLoading()
    }

    func didFail(error: Error) {
        self.stopLoading()
        self.alertsHelper.showErrorAlert { [weak self] in
            self?.startLoading()
        }
    }
}
