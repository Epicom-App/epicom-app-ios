//
//  StatesButton.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 23.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

public class StatesButton: UIButton {

    public typealias EventHandler = (Bool) -> Void

    public var onHighlight: EventHandler?
    public var onSelect: EventHandler?
    public var onEnable: EventHandler?

    private var disposeBag: [NSKeyValueObservation] = []

    deinit {
        self.removeStateObservers()
    }

    public override func willMove(toSuperview newSuperview: UIView?) {
        super.willMove(toSuperview: newSuperview)
        self.removeStateObservers()
        guard newSuperview != nil else {
            return
        }
        self.addStateObservers()
    }

    private func addStateObservers() {
        self.observe(\.isHighlighted) { button, _ in
            button.onHighlight?(button.isHighlighted)
        }.disposed(&disposeBag)

        self.observe(\.isSelected) { button, _ in
            button.onSelect?(button.isSelected)
        }.disposed(&disposeBag)

        self.observe(\.isEnabled) { button, _ in
            button.onEnable?(button.isEnabled)
        }.disposed(&disposeBag)
    }

    private func removeStateObservers() {
        self.disposeBag.dispose()
    }
}

private extension NSKeyValueObservation {

    func disposed( _ bag: inout [NSKeyValueObservation]) {
        bag.append(self)
    }
}

private extension Array where Element == NSKeyValueObservation {

    mutating func dispose() {
        forEach { $0.invalidate() }
        removeAll()
    }
}
