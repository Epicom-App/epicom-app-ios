//
//  OnboardingNotificationsView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 12.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

final class OnboardingNotificationsView: OnboardingActionView, TitleProviderProtocol {

    private let notificationsManager = NotificationsManager.shared
    private let onComplete: () -> Void

    init(presenter: UIViewController, onComplete: @escaping () -> Void) {
        self.onComplete = onComplete
        super.init(frame: .zero)
        self.configure(presenter: presenter)
        self.configureActions(presenter: presenter)
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    var providedTitle: String {
        return L10n.Localizable.onboardingTitleNotifications
    }

    private func configure(presenter: UIViewController) {
        self.configure(viewModel: .init(
            topImage: Asset.onboardingNotificationsImage.image,
            info: L10n.Localizable.onboardingInfoNotifications,
            dataProtectionText: L10n.Localizable.onboardingDateschutzBtn,
            onDataProtectionTap: { [weak presenter, weak self] in
                presenter.map { self?.presentDataProtection(presenter: $0) }
            }
        ))
    }

    private func configureActions(presenter: UIViewController) {
        if self.notificationsManager.authorisationStatus == .notDetermined {
            self.update(
                state: .notDetermined(
                    buttonText: L10n.Localizable.onboardingActivateNotificationsBtn,
                    action: { [weak self, weak presenter] in
                        self?.update(state: .loading)
                        self?.notificationsManager.setup { [weak self] granted in
                            presenter.map { self?.configureActions(presenter: $0) }
                        }
                    }))
        } else if self.notificationsManager.authorisationStatus == .denied {
            self.update(
                state: .disabled(
                    infoText: L10n.Localizable.onboardingInfoNotificationsDisabled,
                    action: { [weak self] in
                        self?.openSettings()
                    }))
        } else {
            self.update(
                state: .extendedEnabled(
                    infoText: L10n.Localizable.onboardingInfoNotificationsActivated,
                    buttonText: L10n.Localizable.onboardingCompleteButton,
                    action: self.onComplete
                )
            )
        }
    }
}
