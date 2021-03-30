//
//  OnboardingDatasource.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 10.02.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

protocol OnboardingDatasourceDelegate: class {
    func didChangePage(currentPage: Int)
}

final class OnboardingDatasource: NSObject {

    private weak var collectionView: UICollectionView?
    private weak var pageControl: UIPageControl?
    private let pageDistincter = Distincter<Int>()

    weak var delegate: OnboardingDatasourceDelegate?

    private var views: [UIView] = []
    private let reuseIdentifier = "ReuseIdentifier"
    private var currentPage: Int {
        guard let scrollView = self.collectionView, scrollView.bounds.size.width > 0 else {
            return 0
        }
        return Int(round(scrollView.contentOffset.x / scrollView.bounds.size.width))
    }

    init(collectionView: UICollectionView, pageControl: UIPageControl) {
        super.init()
        collectionView.delegate = self
        collectionView.dataSource = self
        collectionView.register(UICollectionViewCell.self, forCellWithReuseIdentifier: self.reuseIdentifier)
        self.collectionView = collectionView
        self.pageControl = pageControl
    }

    func configure(views: [UIView]) {
        self.views = views
        self.collectionView?.reloadData()
        self.pageControl?.numberOfPages = views.count
        self.pageControl?.currentPage = self.currentPage
    }

    func scrollToNextPage() {
        guard self.currentPage + 1 < self.views.count else {
            return
        }
        self.collectionView?.scrollToItem(at: IndexPath(item: self.currentPage + 1, section: 0), at: .centeredHorizontally, animated: true)
    }
}

extension OnboardingDatasource: UIScrollViewDelegate {

    func scrollViewDidScroll(_ scrollView: UIScrollView) {
        self.pageControl?.currentPage = self.currentPage
        self.pageDistincter.distinct(value: self.currentPage) {
            self.delegate?.didChangePage(currentPage: self.currentPage)
        }
    }
}

extension OnboardingDatasource: UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout {

    func collectionView(_ collectionView: UICollectionView, layout collectionViewLayout: UICollectionViewLayout, sizeForItemAt indexPath: IndexPath) -> CGSize {
        return collectionView.bounds.size
    }

    func collectionView(_ collectionView: UICollectionView, numberOfItemsInSection section: Int) -> Int {
        return views.count
    }

    func collectionView(_ collectionView: UICollectionView, cellForItemAt indexPath: IndexPath) -> UICollectionViewCell {
        let cell = collectionView.dequeueReusableCell(withReuseIdentifier: self.reuseIdentifier, for: indexPath)
        let view = self.views[indexPath.row]
        cell.subviews.forEach { $0.removeFromSuperview() }
        cell.addSubview(view)
        view.bindToSuperview()
        return cell
    }
}
