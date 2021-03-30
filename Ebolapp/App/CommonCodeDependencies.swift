//
//  API.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 13.11.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation
import CommonCode

struct CommonCodeDependencies {
    
    static let database = DatabaseWrapper(databaseDriverFactory: DatabaseDriverFactory())
}


enum API {

    static var baseURL: String {
                
        guard let baseURL = Bundle.main.object(
                forInfoDictionaryKey: "BASE_URL") as? String else {
            LOG.E("base URL not added")
            return ""
        }
        
        return "https://" + baseURL
    }

    static var filesURL: String {
        
        guard let fileURL = Bundle.main.object(
                forInfoDictionaryKey: "FILE_URL") as? String else {
            LOG.E("files URL not added")
            return ""
        }
        
        return "https://" + fileURL
    }
    
    static let endpoints: Endpoints = .init(
        mapStatesCases: TemplateParametersStrategy(
            endpoint: baseURL + "/DEU/{date}/regions.json",
            templates: [.timestamp: "{date}"]
        ),
        mapRegionCases: TemplateParametersStrategy(
            endpoint: baseURL + "/DEU/{date}/areas.json",
            templates: [.timestamp: "{date}"]
        ),
        mapRegionCasesLegend: TemplateParametersStrategy(
            endpoint: filesURL + "/{language}/legend.json",
            templates: [.language: "{language}"]
        )
    )

    static let staticPages: StaticPages = .init(
        imprint: TemplateParametersStrategy(
            endpoint: filesURL + "/{language}/imprint.html",
            templates: [.language: "{language}"]
        ),
        dataPrivacy: TemplateParametersStrategy(
            endpoint: filesURL + "/{language}/dataPrivacy.html",
            templates: [.language: "{language}"]
        ),
        about: TemplateParametersStrategy(
            endpoint: filesURL + "/{language}/about.html",
            templates: [.language: "{language}"]
        )
    )
}
