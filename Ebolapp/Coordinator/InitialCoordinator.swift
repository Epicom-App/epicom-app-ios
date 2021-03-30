//
//  InitialLoadingCoordinator.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 12.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit
import CommonCode

final class InitialCoordinator {

    private var initialUseCase: CreateMapRegionsUseCase? = MapRegionsUseCaseFactory(
        databaseWrapper: CommonCodeDependencies.database,
        endpoints: API.endpoints)
    .createCreateMapRegionsUseCase(
        statesFileReader: JsonFileReaderImpl(fileName: "states"),
        districtFileReader: JsonFileReaderImpl(fileName: "areas")
    )

    private lazy var debugRemoveCache: DebugRecalculateVisitsUseCase? = VisitsUseCaseFactory(
        databaseWrapper: CommonCodeDependencies.database
    ).debugCreateRecalculateVisitsUseCase()

    private var loadingComplete: Bool = false
    private var onboardingComplete: Bool = false {
        didSet {
            if self.onboardingComplete {
                self.onPermissionsGiven?()
            }
        }
    }

    private let onboardingShownKey = "de.ebolapp.InitialLoadingCoordinator.onboardingShownKey"
    private var onboardingShown: Bool {
        get { UserDefaults.standard.bool(forKey: self.onboardingShownKey) }
        set { UserDefaults.standard.set(newValue, forKey: self.onboardingShownKey)  }
    }

    private let cacheRemovedKey = "de.ebolapp.InitialLoadingCoordinator.onCacheRemovedKey"
    private var cacheRemoved: Bool {
        get { UserDefaults.standard.bool(forKey: self.cacheRemovedKey) }
        set { UserDefaults.standard.set(newValue, forKey: self.cacheRemovedKey)  }
    }

    private var currentNavVC: UINavigationController?
    private var onPermissionsGiven: (() -> Void)?

    private func performDebugCacheRemoveIfNeeded(onComplete: @escaping () -> Void) {
        if self.cacheRemoved {
            onComplete()
        } else {
            self.debugRemoveCache?.invoke { [weak self] (_, _) in
                self?.cacheRemoved = true
                self?.debugRemoveCache = nil
                onComplete()
            }
        }
    }

    private func handleLoaded() {
        self.loadingComplete = true
        self.handleNavigation(navVC: self.currentNavVC)
    }

    func start(permissionsGiven: @escaping () -> Void) {
        self.onPermissionsGiven = permissionsGiven
        self.onboardingComplete = self.onboardingShown
        self.handleNavigation(navVC: nil)
        self.performLoading()
    }

    private func performLoading() {
        self.initialUseCase?.invoke { [weak self] (_, _) in
            self?.initialUseCase = nil
            self?.performDebugCacheRemoveIfNeeded { [weak self] in
                self?.handleLoaded()
            }
        }
    }

    private func configureRootVC(vc: UINavigationController?) {
        let appDelegate = UIApplication.shared.delegate as? AppDelegate
        appDelegate?.window = UIWindow(frame: UIScreen.main.bounds)
        appDelegate?.window?.rootViewController = vc
        appDelegate?.window?.makeKeyAndVisible()
        self.currentNavVC = vc
    }

    private func handleNavigation(navVC: UINavigationController?) {
        switch (self.onboardingComplete, self.loadingComplete) {
        case (true, true):
            self.navigateToMap(navVC: navVC)
        case (true, false):
            self.navigateToLoading(navVC: navVC)
        case (false, false):
            self.navigateToOnboarding()
        case (false, true):
            break
        }
    }

    private func navigateToOnboarding() {
        self.onboardingShown = true
        let onboardingVC = OnboardingViewController()
        let navigationVC = UINavigationController(rootViewController: onboardingVC)
        onboardingVC.onComplete = { [weak self, weak navigationVC] in
            self?.onboardingComplete = true
            navigationVC.map { self?.handleNavigation(navVC: $0) }
        }
        self.configureRootVC(vc: navigationVC)
    }

    private func navigateToLoading(navVC: UINavigationController?) {
        let loadingVC = StoryboardScene.Main.initialViewController.instantiate()
        if let navVC = navVC {
            navVC.setNavigationBarHidden(true, animated: true)
            navVC.setViewControllers([loadingVC], animated: true)
        } else {
            let navVC = UINavigationController(rootViewController: loadingVC)
            navVC.setNavigationBarHidden(true, animated: false)
            self.configureRootVC(vc: navVC)
        }
    }

    private func navigateToMap(navVC: UINavigationController?) {
        let mapVC = StoryboardScene.Main.mapViewController.instantiate()
        if let navVC = navVC {
            navVC.setNavigationBarHidden(false, animated: true)
            navVC.setViewControllers([mapVC], animated: true)
        } else {
            let navVC = UINavigationController(rootViewController: mapVC)
            navVC.setNavigationBarHidden(false, animated: false)
            self.configureRootVC(vc: navVC)
        }
    }
}
