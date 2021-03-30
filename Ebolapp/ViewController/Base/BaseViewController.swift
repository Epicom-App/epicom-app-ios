//
//  Created by Appsfactory GmbH
//  Copyright © 2020 Appsfactory GmbH. All rights reserved.
//

import UIKit

class BaseViewController: UIViewController {
    
    private var tab: Tab?
	
	// MARK: - Lifecycle
	
	deinit {
		LOG.V(type(of: self))
	}
    
    override func viewDidLoad() {
        super.viewDidLoad()
        self.navigationItem.title = self.tab?.navigationTitle
    }
	
	// MARK: - Helper
	
    func setupTabBarItem(item: Tab) {
        self.tab = item
        self.title = item.tabBarItemTilte
		self.tabBarItem.image = item.icon
    }
}
