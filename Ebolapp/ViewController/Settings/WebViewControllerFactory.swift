//
// Created by Igor Tiukavkin on 23.03.21.
// Copyright (c) 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

class WebViewControllerFactory {

    static func defaultController(item: WebViewItem) -> WebViewController {
        let service = DefaultWebViewService()
        let vc = WebViewController(item: item, service: service)
        service.output = vc
        return vc
    }

    static func staticPageController(item: WebViewItem) -> WebViewController {
        let service = StaticPageWebViewService()
        let vc = WebViewController(item: item, service: service)
        service.output = vc
        return vc
    }
}
