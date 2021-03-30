//
//  ExtractableView.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 15.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

open class ExtractableView: UIView {
    
    private var nibName: String {
        return String(describing: Self.self)
    }

    public override init(frame: CGRect = .zero) {
        super.init(frame: frame)
        self.setup()
    }

    public required init?(coder: NSCoder) {
        super.init(coder: coder)
        self.setup()
    }

    private func setup() {
        
        let hasNibInMainBundle: Bool = Bundle.main.path(forResource: self.nibName, ofType: "nib") != nil
        let bundle = hasNibInMainBundle ? .main : Bundle(for: Self.self)
        
        guard let view = bundle.loadNibNamed(self.nibName, owner: self, options: nil)?.first as? UIView else {
            return
        }
        self.addSubview(view)
        
        view.translatesAutoresizingMaskIntoConstraints = false
        view.topAnchor.constraint(equalTo: self.topAnchor).isActive = true
        view.bottomAnchor.constraint(equalTo: self.bottomAnchor).isActive = true
        view.leadingAnchor.constraint(equalTo: self.leadingAnchor).isActive = true
        view.trailingAnchor.constraint(equalTo: self.trailingAnchor).isActive = true
    }
}
