//
//  Throttler.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 15.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import Foundation

final class Throttler {
    
    private var throttleTimer: Timer?
    private var throttleInterval: TimeInterval = 0.0
    private var onComplete: (() -> Void)?
    
    deinit {
        self.stopTimer()
    }
    
    private func stopTimer() {
        self.throttleTimer?.invalidate()
        self.throttleTimer = nil
    }
    
    func throttle(_ interval: TimeInterval, onComplete: @escaping () -> Void) {
        self.throttleInterval = interval
        self.onComplete = onComplete
        self.startTimer()
    }
    
    private func startTimer() {
        self.stopTimer()
        self.throttleTimer = Timer.scheduledTimer(
            withTimeInterval: self.throttleInterval,
            repeats: false,
            block: { [weak self] _ in
                self?.onComplete?()
                self?.throttleTimer = nil
            }
        )
    }
}
