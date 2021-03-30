//
//  OnboardingViewController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 10.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

extension OnboardingViewController {

    var collectionViewLayout: UICollectionViewLayout {
        let layout = UICollectionViewFlowLayout()
        layout.scrollDirection = .horizontal
        layout.minimumLineSpacing = 0
        layout.minimumInteritemSpacing = 0
        layout.sectionInset = .zero
        return layout
    }
}

protocol ColorProviderProtocol {
    var providedColor: UIColor { get }
}

protocol TitleProviderProtocol {
    var providedTitle: String { get }
}

final class OnboardingViewController: BaseViewController {

    private lazy var pageControl = UIPageControl()
    private lazy var collectionView = UICollectionView(frame: .zero, collectionViewLayout: self.collectionViewLayout)
    private lazy var datasource = OnboardingDatasource(collectionView: self.collectionView, pageControl: self.pageControl)

    var onComplete: (() -> Void)?

    private var completeHandler: () -> Void {
        let defaultAction: () -> Void = { [weak self] in self?.dismiss(animated: true, completion: nil) }
        return self.onComplete ?? defaultAction
    }

    private lazy var nextBtn = HandlerBarButtonItem(title: L10n.Localizable.onboardingNextBtn) { [weak self] in
        self?.datasource.scrollToNextPage()
    }
    private lazy var dismissBtn = HandlerBarButtonItem(title: L10n.Localizable.onboardingDoneBtn) { [weak self] in
        self?.completeHandler()
    }

    private lazy var onboardingItems = [
        OnboardingMapInfoView(),
        OnboardingCalendarView(),
        Configurator(OnboardingSeverityView()).configure {
            $0.alignToSafeAreaMargin = true
            $0.extraBottomMargin = 38.0
        },
        OnboardingLocationsView(presenter: self),
        OnboardingNotificationsView(presenter: self, onComplete: self.completeHandler)
    ]

    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupView()
        self.setupNavigation()
        self.setupCollectionView()
        self.setupPageControl()
        self.configurePage(currentPage: 0)
    }

    private func setupNotifications() {
        NotificationCenter.default.addObserver(
            self,
            selector: #selector(self.didBecomeActive),
            name: UIApplication.didBecomeActiveNotification,
            object: nil
        )
    }

    private func setupView() {
        self.edgesForExtendedLayout = []
        self.view.backgroundColor = DynamicColor.defaultBackgroundColor
    }

    private func setupNavigation() {
        self.navigationController?.navigationBar.prefersLargeTitles = true
        self.navigationController?.view.backgroundColor = DynamicColor.defaultBackgroundColor
        self.navigationItem.largeTitleDisplayMode = .always
        self.navigationItem.rightBarButtonItem = self.nextBtn
    }

    private func setupCollectionView() {
        self.view.addSubview(self.collectionView)
        self.collectionView.bindToSuperview()
        self.collectionView.showsHorizontalScrollIndicator = false
        self.collectionView.showsVerticalScrollIndicator = false
        self.collectionView.contentInsetAdjustmentBehavior = .never
        self.collectionView.backgroundColor = DynamicColor.defaultBackgroundColor
        self.collectionView.isPagingEnabled = true
        self.collectionView.bounces = false
        self.datasource.delegate = self
        self.datasource.configure(views: self.onboardingItems)
    }

    private func setupPageControl() {
        self.view.addSubview(self.pageControl)
        self.pageControl.isUserInteractionEnabled = false
        self.pageControl.translatesAutoresizingMaskIntoConstraints = false
        self.pageControl.centerXAnchor.constraint(equalTo: self.view.centerXAnchor).isActive = true
        self.pageControl.bottomAnchor.constraint(equalTo: self.view.safeAreaLayoutGuide.bottomAnchor).isActive = true
        self.changePageControlColor(color: .black)
    }

    private func changePageControlColor(color: UIColor) {
        self.pageControl.currentPageIndicatorTintColor = color
        self.pageControl.pageIndicatorTintColor = color.withAlphaComponent(0.2)
    }

    private func configurePage(currentPage: Int) {
        self.navigationItem.rightBarButtonItem = currentPage < self.onboardingItems.count - 1 ? self.nextBtn : self.dismissBtn
        let color = (self.onboardingItems[currentPage] as? ColorProviderProtocol)?.providedColor ?? .white
        self.changePageControlColor(color: color)
        guard let titleProvider = self.onboardingItems[currentPage] as? TitleProviderProtocol else {
            return
        }
        self.navigationItem.title = titleProvider.providedTitle
    }

    @objc private func didBecomeActive() {
        self.datasource.configure(views: self.onboardingItems)
    }
}

extension OnboardingViewController: OnboardingDatasourceDelegate {

    func didChangePage(currentPage: Int) {
        self.configurePage(currentPage: currentPage)
    }
}
