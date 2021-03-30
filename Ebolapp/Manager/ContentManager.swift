//
//  ContentManager.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 13.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

final class ContentManager {
    
    static func writeContent<T: Codable>(data: T, to fileName: String) {
        let archiveURL = FileManager.sharedContainerURL()?.appendingPathComponent(fileName)
        let encoder = JSONEncoder()
        let dataToSave = try? encoder.encode(data)
        archiveURL.map { try? dataToSave?.write(to: $0) }
    }
    
    static func readContent<T: Codable>(from fileName: String) -> T? {
        let archiveURL = FileManager.sharedContainerURL()?.appendingPathComponent(fileName)
        let codeData = archiveURL.map { try? Data(contentsOf: $0) } ?? nil
        let decoder = JSONDecoder()
        return codeData.map { try? decoder.decode(T.self, from: $0) } ?? nil
    }
}
