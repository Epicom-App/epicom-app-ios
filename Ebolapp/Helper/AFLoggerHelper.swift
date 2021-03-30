//
//  Created by Appsfactory GmbH
//  Copyright © 2020 Appsfactory GmbH. All rights reserved.
//

import AFLoggerModule

let LOG = AFLogger.shared

class AFLoggerHelper {
	
	class func configureLogger() {
		
		guard ProcessInfo.processInfo.environment["XCTestConfigurationFilePath"] == nil else {
			return
		}
        
        switch BuildConfiguration.current {
        case .debug:
            LOG.activate(withOnscreenOutput: true)
        case .adHoc, .enterprise:
            LOG.activate(withOnscreenOutput: false)
        case .appStore:
            break // don't activate logs in app store version
        }
	}
}
