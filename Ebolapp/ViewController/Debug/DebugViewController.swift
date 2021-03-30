//
//  DebugViewController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 22.01.21.
//  Copyright © 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit
import CommonCode

//swiftlint:disable all
class DebugViewController: UIViewController {

    private let tableView = UITableView(frame: .zero, style: .grouped)
    private let factory = DebugUseCaseFactory(databaseWrapper: CommonCodeDependencies.database)

    private lazy var createCasesDebugInfoUseCase = self.factory.createCasesDebugInfoUseCase()
    private lazy var createStatesCasesDebugInfoUseCase = self.factory.createStatesCasesDebugInfoUseCase()
    private lazy var createVisitsDebugInfoUseCase = self.factory.createVisitsDebugInfoUseCase()
    private lazy var createMapRegionsDebugInfoUseCase = self.factory.createMapRegionsDebugInfoUseCase()
    private lazy var createCasesLegendDebugInfoUseCase = self.factory.createCasesLegendDebugInfoUseCase()
    private lazy var createRiskMatchesDebugInfoUseCase = self.factory.createRiskMatchesDebugInfoUseCase()
    private lazy var createUserLocationsDebugInfoUseCase = self.factory.createUserLocationsDebugInfoUseCase()
    private lazy var createRiskMatchNotificationsDebugInfoUseCase = self.factory.createRiskMatchNotificationsDebugInfoUseCase()

    // Changing something here please change calls in didSelectRow: method
    private lazy var dateProducersNames: [String] = [
        self.getName(from: self.createMapRegionsDebugInfoUseCase),
        self.getName(from: self.createCasesDebugInfoUseCase),
        self.getName(from: self.createStatesCasesDebugInfoUseCase),
        self.getName(from: self.createCasesLegendDebugInfoUseCase),
        self.getName(from: self.createUserLocationsDebugInfoUseCase),
        self.getName(from: self.createVisitsDebugInfoUseCase),
        self.getName(from: self.createRiskMatchesDebugInfoUseCase),
        self.getName(from: self.createRiskMatchNotificationsDebugInfoUseCase)
    ]

    override func viewDidLoad() {
        super.viewDidLoad()
        self.navigationItem.title = "Debug"
        self.view.addSubview(self.tableView)

        self.tableView.bindToSuperview()
        self.tableView.allowsMultipleSelection = false
        self.tableView.backgroundColor = .groupTableViewBackground
        self.tableView.dataSource = self
        self.tableView.delegate = self
    }

    private func getName(from: Any) -> String {
        String(describing: from)
            .split(separator: ".")
            .last?
            .replacingOccurrences(of: "Get", with: "")
            .replacingOccurrences(of: "UseCase", with: "")
            .replacingOccurrences(of: "Impl", with: "")
            .replacingOccurrences(of: "DbgInfo", with: "")
            .replacingOccurrences(of: "DebugInfo", with: "")
            .split(separator: "@")
            .first?
            .splitCamelCase() ?? ""
    }

    private func handleError(error: Error?) {
        LoadingView.hideLoading(on: self.view)
        error.map { _ in
            let alert = UIAlertController(title: "Error", message: "Objects not found", preferredStyle: .alert)
            alert.addAction(.init(title: "OK", style: .cancel, handler: nil))
            self.present(alert, animated: true, completion: nil)
        }
    }

    private func handleTransition(objects: [Any]?, title: String) {
        LoadingView.hideLoading(on: self.view)
        objects.map {
            let vc = DebugDetailsViewController(objects: $0, title: title)
            self.navigationController?.pushViewController(vc, animated: true)
        }
    }
}

extension DebugViewController: UITableViewDelegate, UITableViewDataSource {

    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return self.dateProducersNames.count
    }

    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        let reuseIdentifier = "DebugListCell"
        let cell = tableView.dequeueReusableCell(withIdentifier: reuseIdentifier)
            ?? UITableViewCell(style: .default, reuseIdentifier: reuseIdentifier)
        cell.textLabel?.text = self.dateProducersNames[indexPath.row]
        return cell
    }

    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        tableView.deselectRow(at: indexPath, animated: true)
        LoadingView.showLoading(on: self.view, after: 0.0)
        let title = self.dateProducersNames[indexPath.row]
        // Order should be the same as in dateProducersNames array
        switch indexPath.row {
        case 0:
            self.createMapRegionsDebugInfoUseCase.invoke { [weak self] (objects, error) in
                self?.handleError(error: error)
                self?.handleTransition(objects: objects, title: title)
            }
        case 1:
            self.createCasesDebugInfoUseCase.invoke { [weak self] (objects, error) in
                self?.handleError(error: error)
                self?.handleTransition(objects: objects, title: title)
            }
        case 2:
            self.createStatesCasesDebugInfoUseCase.invoke { [weak self] (objects, error) in
                self?.handleError(error: error)
                self?.handleTransition(objects: objects, title: title)
            }
        case 3:
            self.createCasesLegendDebugInfoUseCase.invoke { [weak self] (objects, error) in
                self?.handleError(error: error)
                self?.handleTransition(objects: objects, title: title)
            }
        case 4:
            self.createUserLocationsDebugInfoUseCase.invoke { [weak self] (objects, error) in
                self?.handleError(error: error)
                self?.handleTransition(objects: objects, title: title)
            }
        case 5:
            self.createVisitsDebugInfoUseCase.invoke { [weak self] (objects, error) in
                self?.handleError(error: error)
                self?.handleTransition(objects: objects, title: title)
            }
        case 6:
            self.createRiskMatchesDebugInfoUseCase.invoke { [weak self] (objects, error) in
                self?.handleError(error: error)
                self?.handleTransition(objects: objects, title: title)
            }
        case 7:
            self.createRiskMatchNotificationsDebugInfoUseCase.invoke { [weak self] (objects, error) in
                self?.handleError(error: error)
                self?.handleTransition(objects: objects, title: title)
            }
        default:
            self.handleError(error: NSError(domain: "debug.error", code: 0, userInfo: nil))
        }
    }

    func tableView(_ tableView: UITableView, viewForHeaderInSection section: Int) -> UIView? {
        return nil
    }

    func tableView(_ tableView: UITableView, heightForHeaderInSection section: Int) -> CGFloat {
        return 24.0
    }
}
