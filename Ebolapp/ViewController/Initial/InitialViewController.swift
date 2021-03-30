//
//  InitialViewController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 03.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

protocol InitialViewInput: class {
    func showPleaseWaitLabel()
}

protocol InitialViewOutput: class {
    func didLoad()
}

class InitialViewController: BaseViewController, InitialViewInput {
    
    @IBOutlet weak var infoLabel: UILabel!
    
    private lazy var logicController = InitialLogicController(view: self)
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.logicController.didLoad()
        self.infoLabel.text = L10n.Localizable.pleaseWaitInfo
        self.infoLabel.isHidden = true
    }

    func showPleaseWaitLabel() {
        self.infoLabel.isHidden = false
    }
}
