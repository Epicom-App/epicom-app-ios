//
//  Created by Appsfactory GmbH
//  Copyright © 2020 Appsfactory GmbH. All rights reserved.
//

import AppCenter
import AppCenterCrashes
import AppCenterDistribute

final class AppCenterHelper: NSObject {

    private enum Const {

        static let secretPrefix = "appcenter-"
        static let secretPlaceholder = "\(Self.secretPrefix){appcenter_app_secret}"
    }

    // MARK: - Singleton

    public static let shared = AppCenterHelper()

    // MARK: - Properties

    private var secret: String? {

        guard let urlTypes = Bundle.main.infoDictionary?["CFBundleURLTypes"] as? [[String: Any]] else {
            return nil
        }

        return urlTypes
            .compactMap { $0["CFBundleURLSchemes"] as? [String] }
            .first?
            .first { $0.hasPrefix(Const.secretPrefix) && $0 != Const.secretPlaceholder }?
            .replacingOccurrences(of: Const.secretPrefix, with: "")
    }

    // MARK: - Init

    private override init() {
        super.init()
    }

    // MARK: - Public
    
    func setup() {
        self.isAppCenterEnabled { [weak self] granted in
            granted ? self?.start() : self?.stop()
        }
    }
    
    // MARK: - Private

    private func start() {

        guard let secret = self.secret, !secret.isEmpty else {
            return
        }

        MSAppCenter.start(secret, withServices: [MSCrashes.self, MSDistribute.self])
        MSCrashes.setEnabled(true)
        MSCrashes.setDelegate(self)
    }

    private func stop() {
        MSCrashes.setEnabled(false)
    }
    
    private func isAppCenterEnabled(completion: @escaping (Bool) -> Void) {
        let enabledIn: [BuildConfiguration] = [.debug, .adHoc, .enterprise]
        completion(enabledIn.contains(.current))
    }
}

// MARK: - MSCrashesDelegate

extension AppCenterHelper: MSCrashesDelegate {

    func attachments(with crashes: MSCrashes!, for errorReport: MSErrorReport!) -> [MSErrorAttachmentLog]! {

        if BuildConfiguration.current == .appStore {
            return nil
        }

        let customCrashLog = LOG.getCrashLog(withBytes: 5000)

        if let attachment = MSErrorAttachmentLog.attachment(withText: customCrashLog, filename: nil) {
            return [attachment]
        } else {
            return nil
        }
    }
}
