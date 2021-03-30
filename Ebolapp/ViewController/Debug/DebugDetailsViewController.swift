//
//  DebugDetailsViewController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 22.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit
import CommonCode

//swiftlint:disable all
class DebugDetailsViewController: UIViewController {

    private let objects: [Any]
    private let scrollView = UIScrollView()
    private let tableView = UITableView(frame: .zero, style: .plain)
    private var headerView: DebugDetailsHeaderView?

    init(objects: [Any], title: String) {
        self.objects = objects.reversed()
        super.init(nibName: nil, bundle: nil)
        self.navigationItem.title = title
    }

    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        self.view.backgroundColor = .white
        if self.objects.count > 0 {

            // Setup table header view
            let firstObject = self.objects.first!
            let titles = self.unpackObject(object: firstObject).compactMap { $0.first }
            let headerView = DebugDetailsHeaderView(titles: titles)
            self.headerView = headerView

            // Setup scrollView
            self.view.addSubview(scrollView)
            self.scrollView.showsVerticalScrollIndicator = false
            self.scrollView.bindToSuperview()
            self.scrollView.addSubview(self.tableView)

            // Setup tableView
            self.tableView.bindToSuperview()
            self.tableView.register(DebugDetailsCell.self, forCellReuseIdentifier: "DebugDetailsCell")
            self.tableView.heightAnchor.constraint(equalToConstant: UIScreen.main.bounds.height).isActive = true
            self.tableView.widthAnchor.constraint(equalToConstant: headerView.bounds.width).isActive = true
            self.tableView.allowsSelection = false
            self.tableView.backgroundColor = .groupTableViewBackground
            self.tableView.separatorInset = .zero
            self.tableView.dataSource = self
            self.tableView.delegate = self
            self.tableView.isHidden = true

        } else {
            let label = UILabel()
            label.text = "No data available"
            label.textAlignment = .center
            self.view.addSubview(label)
            label.bindToSuperview()
        }
    }

    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        self.tableView.reloadData()
        self.tableView.isHidden = false
    }

    private func unpackObject(object: Any) -> [[String]] {
        let pattern = "(?<=\\[)[^]]+(?=\\])"
        let objectString = String(describing: object)
        let values = objectString.matches(regex: pattern).first?.split(separator: "\n") ?? []
        return values.map { $0.split(separator: ":").map { $0.trimmingCharacters(in: .whitespacesAndNewlines) } }
    }
}

extension DebugDetailsViewController: UITableViewDelegate, UITableViewDataSource {

    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return self.objects.count
    }

    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let reuseIdentifier = "DebugDetailsCell"
        let cell = tableView.dequeueReusableCell(withIdentifier: reuseIdentifier, for: indexPath)
        let object = self.objects[indexPath.row]
        let titles = self.unpackObject(object: object).compactMap { $0.last }
        let widths = titles.enumerated().compactMap { self.headerView?.width(at: $0.offset) }
        (cell as? DebugDetailsCell)?.configure(titles: titles, widths: widths)
        return cell
    }

    func tableView(_ tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
        return self.headerView
    }

    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return self.headerView?.bounds.height ?? 0.0
    }
}
