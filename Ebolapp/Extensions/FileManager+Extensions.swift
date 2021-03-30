//
//  FileManagerExtensions.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 13.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

extension FileManager {
    static func sharedContainerURL() -> URL? {
        return FileManager.default.containerURL(
            forSecurityApplicationGroupIdentifier: WidgetConstants.appGroupIdentifier
        )
    }
}
