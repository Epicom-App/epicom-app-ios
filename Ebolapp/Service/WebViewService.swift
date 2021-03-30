//
//  WebViewService.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 23.03.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit
import WebKit
import CommonCode

protocol WebViewServiceInput: class {
    func load(url: String, in webView: WKWebView)
}

protocol WebViewServiceOutput: class {
    func didFinish()
    func didFail(error: Error)
}

enum WebViewServiceError: Error {
    case unknown
}

class WebViewService: NSObject, WKNavigationDelegate {

    weak var webView: WKWebView? {
        didSet { self.webView?.navigationDelegate = self }
    }
    weak var output: WebViewServiceOutput?

    func webView(_ webView: WKWebView,
                 decidePolicyFor navigationAction: WKNavigationAction,
                 decisionHandler: @escaping (WKNavigationActionPolicy) -> Void) {
        if navigationAction.navigationType == .linkActivated {
            navigationAction.request.url.map {
                if UIApplication.shared.canOpenURL($0) {
                    UIApplication.shared.open($0, options: [:], completionHandler: nil)
                }
            }
            decisionHandler(.cancel)
        } else {
            decisionHandler(.allow)
        }
    }

    func webView(_ webView: WKWebView, didFinish navigation: WKNavigation!) {
        self.output?.didFinish()
    }

    func webView(_ webView: WKWebView, didFail navigation: WKNavigation!, withError error: Error) {
        self.output?.didFail(error: error)
    }
}

final class DefaultWebViewService: WebViewService, WebViewServiceInput {

    func load(url: String, in webView: WKWebView) {
        guard let url = URL(string: url) else {
            self.output?.didFail(error: WebViewServiceError.unknown)
            return
        }
        self.webView = webView
        let request = URLRequest(url: url)
        webView.load(request)
    }
}

final class StaticPageWebViewService: WebViewService, WebViewServiceInput {

    private let getStaticPageUseCase = StaticPagesUseCaseFactory(databaseWrapper: CommonCodeDependencies.database).createGetStaticPageUseCase()

    func load(url: String, in webView: WKWebView) {
        self.getStaticPageUseCase.invoke(url: url) { [weak self, weak webView] html, error in
            if let html = html {
                let meta = "<meta name=\"viewport\" content=\"initial-scale=1.0\" />"
                webView?.loadHTMLString(meta + html, baseURL: nil)
                self?.output?.didFinish()
            } else {
                self?.output?.didFail(error: error ?? WebViewServiceError.unknown)
            }
        }
    }
}
