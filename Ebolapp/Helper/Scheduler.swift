//
// Created by Igor Tiukavkin on 06.01.21.
// Copyright (c) 2021 APPSfactory GmbH. All rights reserved.
//

import UIKit

protocol Scheduler {
    func schedule(every seconds: TimeInterval, job: @escaping () -> Void)
}

final class ForegroundScheduler: Scheduler {

    init() {
        NotificationCenter.default.addObserver(self,
            selector: #selector(applicationWillEnterForeground),
            name: UIApplication.willEnterForegroundNotification,
            object: nil)
        NotificationCenter.default.addObserver(self,
            selector: #selector(didEnterBackgroundNotification),
            name: UIApplication.didEnterBackgroundNotification,
            object: nil)
    }

    private var timer: Timer?
    private var seconds: TimeInterval = 1
    private var job: (() -> Void)?

    deinit {
        self.stopTimer()
    }

    func schedule(every seconds: TimeInterval, job: @escaping () -> Void) {
        self.stopTimer()
        self.seconds = max(seconds, 1.0)
        self.job = job
        let timer = Timer(timeInterval: self.seconds, repeats: false, block: { [weak self] _ in
            guard let self = self else {
                return
            }
            self.schedule(every: self.seconds, job: job)
        })
        self.timer = timer
        job()
        RunLoop.current.add(timer, forMode: .common)
    }

    @objc private func applicationWillEnterForeground() {
        guard let job = self.job else {
            return
        }
        self.schedule(every: self.seconds, job: job)
    }

    @objc private func didEnterBackgroundNotification() {
        self.stopTimer()
    }

    private func stopTimer() {
        self.timer?.invalidate()
        self.timer = nil
    }
}
