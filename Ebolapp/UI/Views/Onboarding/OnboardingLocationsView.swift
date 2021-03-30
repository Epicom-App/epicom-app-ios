//
//  OnboardingLocationsView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 12.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

final class OnboardingLocationsView: OnboardingActionView, TitleProviderProtocol {

    private let locationAuthManager = LocationAuthManager()

    init(presenter: UIViewController) {
        super.init(frame: .zero)
        self.configure(presenter: presenter)
        self.configureActions(presenter: presenter)
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    var providedTitle: String {
        return L10n.Localizable.onboardingTitleLocation
    }

    private func configure(presenter: UIViewController) {
        self.configure(viewModel: .init(
            topImage: Asset.onboardingLocationTopImage.image,
            info: L10n.Localizable.onboardingInfoLocation,
            dataProtectionText: L10n.Localizable.onboardingDateschutzBtn,
            onDataProtectionTap: { [weak presenter, weak self] in
                presenter.map { self?.presentDataProtection(presenter: $0) }
            }
        ))
    }

    private func configureActions(presenter: UIViewController) {
        if self.locationAuthManager.authorizationStatus == .notDetermined {
            self.update(
                state: .notDetermined(
                    buttonText: L10n.Localizable.onboardingAllowLocationBtn,
                    action: { [weak self, weak presenter] in
                        self?.update(state: .loading)
                        self?.locationAuthManager.requestAuthorization(type: .always) { result in
                            presenter.map { self?.configureActions(presenter: $0) }
                        }
                    }))
        } else if [.denied, .restricted, .notDetermined].contains(self.locationAuthManager.authorizationStatus) {
            self.update(
                state: .disabled(
                    infoText: L10n.Localizable.onboardingInfoLocationDisabled,
                    action: { [weak self] in
                        self?.openSettings()
                    }))
        } else {
            self.update(
                state: .enabled(infoText: L10n.Localizable.onboardingInfoLocationShared)
            )
        }
    }
}
