//
//  Created by Appsfactory GmbH
//  Copyright © 2020 Appsfactory GmbH. All rights reserved.
//

import Foundation

enum BuildConfiguration {
    
    case debug
    case adHoc
    case enterprise
    case appStore
    
    static var current: BuildConfiguration {
        
        #if CONFIGURATION_Debug
        return .debug
        #elseif CONFIGURATION_AdHoc
        return .adHoc
        #elseif CONFIGURATION_Enterprise
        return .enterprise
        #elseif CONFIGURATION_AppStore
        return .appStore
        #else
        preconditionFailure("build configuration can not be determined!")
        #endif
    }
}
