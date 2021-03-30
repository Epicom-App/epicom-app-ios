//
//  JsonFileReaderHelper.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 08.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CommonCode

class JsonFileReaderImpl: JsonFileReader {
    private let fileName: String
    
    init(fileName: String) {
        self.fileName = fileName
    }
    
    func get(completionHandler: @escaping (String?, Error?) -> Void) {
        let path = Bundle.main.path(forResource: self.fileName, ofType: ".json")
        let data = try? path.map { try Data(contentsOf: URL(fileURLWithPath: $0), options: .mappedIfSafe) }
        let jsonString = data.map { String(data: $0, encoding: .utf8) } ?? ""
        completionHandler(jsonString, nil)
    }
}
