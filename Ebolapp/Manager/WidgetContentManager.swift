//
//  ContentManager.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 13.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

final class WidgetContentManager {
    
    static func writeContent<T: Codable>(data: T, to fileName: String) {
        let archiveURL = FileManager.sharedContainerURL().appendingPathComponent(fileName)
        let encoder = JSONEncoder()
        let dataToSave = try? encoder.encode(data)
        try? dataToSave?.write(to: archiveURL)
    }
    
    static func readContent<T: Codable>(from fileName: String) -> T? {
        let archiveURL = FileManager.sharedContainerURL().appendingPathComponent(fileName)
        let codeData = try? Data(contentsOf: archiveURL)
        let decoder = JSONDecoder()
        return codeData.map { try? decoder.decode(T.self, from: $0) } ?? nil
    }
}
