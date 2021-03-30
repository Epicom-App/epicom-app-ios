//
//  InitialLogicController.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 03.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

class InitialLogicController: InitialViewOutput {

    private weak var view: InitialViewInput?
    
    init(view: InitialViewInput) {
        self.view = view
    }
    
    func didLoad() {
        Timer.scheduledTimer(withTimeInterval: 5.0, repeats: false) { [weak self] _ in
            self?.view?.showPleaseWaitLabel()
        }
    }
}
