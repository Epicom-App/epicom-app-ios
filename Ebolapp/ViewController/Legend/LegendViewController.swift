//
// Created by Igor Tiukavkin on 17.03.21.
// Copyright (c) 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

class LegendViewController: BaseViewController {

    private let scrollView = UIScrollView()

    override func viewDidLoad() {
        super.viewDidLoad()
        self.edgesForExtendedLayout = [.bottom]
        self.setupNavigation()
        self.setupContentView()
    }

    private func setupNavigation() {
        self.navigationItem.title = L10n.Localizable.legendNavigationTitle
        self.navigationController?.navigationBar.prefersLargeTitles = true
        self.navigationController?.view.backgroundColor = DynamicColor.defaultBackgroundColor
        self.navigationItem.leftBarButtonItem = HandlerBarButtonItem(barButtonSystemItem: .cancel) { [weak self] in
            self?.dismiss(animated: true, completion: nil)
        }
    }

    private func setupContentView() {
        self.view.backgroundColor = DynamicColor.defaultBackgroundColor
        let contentView = OnboardingSeverityView()
        self.view.addSubview(contentView)
        contentView.bindToSuperview()
    }
}
