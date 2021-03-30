//
//  Created by Appsfactory GmbH
//  Copyright © 2020 Appsfactory GmbH. All rights reserved.
//

import XCTest

class EbolappUITests: XCTestCase {
	
	var app: XCUIApplication! {
		didSet {
			self.app.launchArguments.append("--uitesting")
		}
	}
	
	
	// MARK: - Life cycle

	override func setUp() {
		super.setUp()
		
		// Put setup code here. This method is called before the invocation of each test method in the class.
		
		// In UI tests it is usually best to stop immediately when a failure occurs.
		self.continueAfterFailure = false
		// UI tests must launch the application that they test. Doing this in setup will make sure it happens for each test method.
		self.app = XCUIApplication()
		self.app.launch()
		
		// In UI tests it’s important to set the initial state - such as interface orientation - required for your tests before they run. The setUp method is a good place to do this.
	}
	
	override func tearDown() {
		// Put teardown code here. This method is called after the invocation of each test method in the class.
		super.tearDown()
	}
	
	
	// MARK: - Test cases
	
	func testExample() {
		// Use recording to get started writing UI tests.
		// Use XCTAssert and related functions to verify your tests produce the correct results.
	}
}
