//
//  SettingsViewController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 15.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

class SettingsViewController: BaseViewController {

    @IBOutlet private weak var tableView: UITableView!

    private lazy var logicController: SettingsLogicControllerInput = SettingsLogicController(output: self)
    private var items: [SettingsItem] = []

    override func awakeFromNib() {
        super.awakeFromNib()
        self.setupTabBarItem(item: .settings)
    }
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.setupTableView()
        self.logicController.didLoad()
    }

    private func setupTableView() {
        let identifier = String(describing: SettingsCell.self)
        let nib = UINib(nibName: identifier, bundle: nil)
        self.tableView.register(nib, forCellReuseIdentifier: identifier)
        self.tableView.delegate = self
        self.tableView.dataSource = self
        self.tableView.backgroundColor = .groupTableViewBackground
    }
}

// MARK: - SettingsLogicControllerOutput

extension SettingsViewController: SettingsLogicControllerOutput {

    func update(items: [SettingsItem]) {
        self.items = items
        self.tableView.reloadData()
    }
}

// MARK: - UITableViewDelegate, UITableViewDataSource

extension SettingsViewController: UITableViewDelegate, UITableViewDataSource {

    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return self.items.count
    }

    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let identifier = String(describing: SettingsCell.self)
        let cell = tableView.dequeueReusableCell(withIdentifier: identifier, for: indexPath)
        (cell as? SettingsCell)?.configure(item: self.items[indexPath.row])
        return cell
    }

    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        let settingsItem = self.items[indexPath.row]
        let vc = settingsItem.target
        switch settingsItem.presentationType {
        case .push:
            self.navigationController?.pushViewController(vc, animated: true)
        case .present:
            self.present(vc, animated: true, completion: nil)
        }
    }

    func tableView(_ tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
        return nil
    }

    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 24.0
    }
}
