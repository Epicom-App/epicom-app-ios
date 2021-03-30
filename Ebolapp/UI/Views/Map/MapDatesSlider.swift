//
//  MapDatesSlider.swift
//  Ebolapp
//
//  Created by Igor Tiukavkin on 15.10.20.
//  Copyright © 2020 APPSfactory GmbH. All rights reserved.
//

import UIKit

protocol MapDatesSliderDelegate: class {
    func didChangeDaysOffset(offset: Int)
}

class ExtendedSlider: UISlider {

    override func point(inside point: CGPoint, with event: UIEvent?) -> Bool {
        return self.bounds.padding(20.0).contains(point)
    }
}

class MapDatesSlider: ExtractableView {
    
    struct ViewModel {
        let daysBackFromToday: Int
        let offset: Int
    }
    
    struct Style {
        let titleColor = DynamicColor.defaultTextColor
        let titleFont: UIFont = UIFont.systemFont(ofSize: 14.0, weight: .bold)
        let cornerRadius: CGFloat = 8.0
        let bgColor: UIColor = DynamicColor.defaultBackgroundColor
        let thumbColor: UIColor = DynamicColor.tintMainColor
        let datesTextColor: UIColor = DynamicColor.secondaryTextColor
        let datesFont: UIFont = UIFont.systemFont(ofSize: 10.0)
        let scaleColor: UIColor = DynamicColor.sliderScaleColor
        let annotationsColor: UIColor = ColorName.colorRed.color
    }

    @IBOutlet private weak var contentView: UIView!
    @IBOutlet private weak var scaleLineView: UIView!
    @IBOutlet private weak var scaleView: UIStackView!
    @IBOutlet private weak var sliderView: ExtendedSlider!
    
    @IBOutlet private weak var dateTitleLabel: UILabel!
    @IBOutlet private weak var fromDateLabel: UILabel!
    @IBOutlet private weak var toDateLabel: UILabel!
    
    @IBOutlet private weak var slideableView: TopAnnotationView!
    @IBOutlet private weak var slideableViewCenter: NSLayoutConstraint!
    
    @IBOutlet private weak var datePicker: UIDatePicker?
    @IBOutlet private weak var datesBottom: NSLayoutConstraint!

    @IBOutlet private weak var matchAnnotationsView: UIStackView!
    
    private var style = Style()
    private var viewModel: ViewModel?
    private var daysOffset = 0
    private var today = DateProvider.shared.today
    private var throttler = Throttler()
    private var distincter = Distincter<Float>()
    private var riskOffsets: [Int] = []

    weak var delegate: MapDatesSliderDelegate?

    private var valueSteps: [Float] {
        let daysCount = self.viewModel?.daysBackFromToday ?? 1
        let step = 1.0 / Float(daysCount)
        return (0...daysCount).map { Float($0) * step }
    }

    override func willMove(toSuperview newSuperview: UIView?) {
        super.willMove(toSuperview: newSuperview)
        newSuperview.map { _ in
            self.slideableView.alpha = 0.0
            self.sliderView.addTarget(self, action: #selector(self.valueChanged(slider:for:)), for: .valueChanged)
            self.applyStyle(style: self.style)
        }
    }

    override func layoutSubviews() {
        super.layoutSubviews()
        self.configureThumbImage()
    }

    func configure(viewModel: ViewModel) {
        self.viewModel = viewModel
        self.createScaleView(count: viewModel.daysBackFromToday)
        self.createMatchAnnotationsView(count: viewModel.daysBackFromToday)
        self.fromDateLabel.text = L10n.Localizable.mapSliderDaysAgo(viewModel.daysBackFromToday)
        self.toDateLabel.text = L10n.Localizable.mapSliderToday
        self.setupOffset(offset: viewModel.offset)
        self.updateDatePicker()
    }

    func update(riskDates: [Date]) {
        self.riskOffsets = riskDates.map { DateUtils.daysBetween(date: $0, anotherDate: self.today) }
        self.updateScaleView()
        self.updateMatchAnnotationView()
    }
    
    func applyStyle(style: Style) {
        self.style = style
        
        self.contentView.backgroundColor = style.bgColor
        self.contentView.layer.cornerRadius = style.cornerRadius
        self.contentView.addDefaultShadow()
        
        self.scaleLineView.backgroundColor = style.scaleColor
        
        self.dateTitleLabel.font = style.titleFont
        self.dateTitleLabel.textColor = style.titleColor
        self.dateTitleLabel.text = L10n.Localizable.mapSliderTitle
        
        self.fromDateLabel.textColor = style.datesTextColor
        self.fromDateLabel.font = style.datesFont
        
        self.toDateLabel.textColor = style.datesTextColor
        self.toDateLabel.font = style.datesFont

        self.configureThumbImage()
        self.sliderView.minimumTrackTintColor = .clear
        self.sliderView.maximumTrackTintColor = .clear

        if #available(iOS 13.4, *) {
            self.datePicker?.datePickerMode = .date
            self.datePicker?.preferredDatePickerStyle = .compact
            self.datePicker?.tintColor = DynamicColor.tintMainColor
        } else {
            self.datePicker?.removeFromSuperview()
            self.datesBottom.constant = 24.0
            self.layoutIfNeeded()
        }
    }

    private func configureThumbImage() {
        let thumbView = UIView()
        thumbView.frame.size = CGSize(width: 20.0, height: 20.0)
        thumbView.backgroundColor = self.style.thumbColor
        thumbView.layer.cornerRadius = 10.0
        thumbView.layer.masksToBounds = true

        self.sliderView.setThumbImage(thumbView.asImage(), for: .normal)
    }
    
    private func createScaleView(count: Int) {
        self.scaleView.arrangedSubviews.forEach {
            self.scaleView.removeArrangedSubview($0)
            $0.removeFromSuperview()
        }
        (0...count).forEach { _ in
            self.scaleView.addArrangedSubview(self.createScaleItem())
        }
    }

    private func createMatchAnnotationsView(count: Int) {
        self.matchAnnotationsView.arrangedSubviews.forEach {
            self.matchAnnotationsView.removeArrangedSubview($0)
            $0.removeFromSuperview()
        }
        (0...count).forEach { _ in
            self.matchAnnotationsView.addArrangedSubview(self.createMatchAnnotationsItem())
        }
    }

    private func updateScaleView() {
        self.scaleView.arrangedSubviews.enumerated().forEach { (index, view) in
            let offset = self.scaleView.arrangedSubviews.count - 1 - index
            if self.riskOffsets.contains(offset) {
                view.backgroundColor = ColorName.colorRed.color
            } else {
                view.backgroundColor = self.style.scaleColor
            }
        }
    }

    private func updateMatchAnnotationView() {
        self.matchAnnotationsView.isHidden = self.riskOffsets.count == 0
        self.matchAnnotationsView.arrangedSubviews.enumerated().forEach { (index, view) in
            let offset = self.scaleView.arrangedSubviews.count - 1 - index
            let isVisible = self.riskOffsets.contains(offset)
            view.alpha = isVisible ? 1.0 : 0.0
        }
    }
    
    private func createScaleItem() -> UIView {
        let view = UIView()
        view.layer.cornerRadius = 2.0
        view.layer.masksToBounds = true
        view.backgroundColor = self.style.scaleColor
        view.translatesAutoresizingMaskIntoConstraints = false
        view.widthAnchor.constraint(equalToConstant: 3.0).isActive = true
        return view
    }

    private func createMatchAnnotationsItem() -> UIView {
        let view = RiskMatchExclamationMark()
        view.accessibilityLabel = L10n.Localizable.contentDescriptionRiskMatch
        view.alpha = 0.0
        return view
    }
    
    private func manageSlideableView(value: Float, offset: Int) {
        self.slideableView.configure(text: MapDateFormatter.shared.shortStringFrom(self.today, withOffset: -offset))
        self.slideableViewCenter.constant = -CGFloat(value) * self.scaleView.bounds.width
        self.slideableView.alpha = 1.0
        self.slideableView.applyStyle(style: self.riskOffsets.contains(offset) ? .error : .default)
        self.throttler.throttle(2.0) { [weak self] in
            UIView.animate(withDuration: 0.2) {
                self?.slideableView.alpha = 0.0
            }
        }
    }

    private func setupOffset(offset: Int) {
        let daysCount = self.viewModel?.daysBackFromToday ?? 1
        let steps = self.valueSteps
        let index = daysCount - offset
        self.daysOffset = offset
        self.sliderView.value = steps[index]
        self.sliderView.accessibilityValue = MapDateFormatter.shared.longAccessiblityStringFromDate(self.today, withOffset: -self.daysOffset)
    }

    private func updateDatePicker() {
        let maxDateOffset = self.viewModel?.daysBackFromToday ?? 0
        self.datePicker?.maximumDate = self.today
        self.datePicker?.minimumDate = MapDateFormatter.shared.dateFrom(self.today, withOffset: -maxDateOffset)
        self.datePicker?.date = MapDateFormatter.shared.dateFrom(self.today, withOffset: -self.daysOffset)
    }
    
    @objc private func valueChanged(slider: UISlider, for event: UIEvent) {
        if case .ended = event.allTouches?.first?.phase {
            self.delegate?.didChangeDaysOffset(offset: self.daysOffset)
        } else {
            let daysCount = self.viewModel?.daysBackFromToday ?? 1
            let steps = self.valueSteps
            let newValue = steps.enumerated().min(by: { abs($0.1 - slider.value) < abs($1.1 - slider.value) })
            let offset = daysCount - (newValue?.offset ?? 0)
            
            slider.value = newValue?.element ?? slider.value
            slider.accessibilityValue = MapDateFormatter.shared.longAccessiblityStringFromDate(self.today, withOffset: -offset)
            
            self.daysOffset = offset
            self.manageSlideableView(value: slider.value, offset: offset)
            self.updateDatePicker()
            self.hapticFeedback()
        }
    }

    private func hapticFeedback() {
        self.distincter.distinct(value: self.sliderView.value) {
            HapticFeedbackHelper.generate(style: .light)
        }
    }

    @IBAction private func datePickerDidChangeDate(picker: UIDatePicker) {
        let offset = DateUtils.daysBetween(date: picker.date, anotherDate: self.today)
        self.setupOffset(offset: offset)
    }

    @IBAction private func datePickerDidEndEditing() {
        self.datePicker?.tintColor = DynamicColor.tintMainColor
        self.delegate?.didChangeDaysOffset(offset: self.daysOffset)
    }

    override func hitTest(_ point: CGPoint, with event: UIEvent?) -> UIView? {
        let view = super.hitTest(point, with: event)
        if self.datePicker.flatMap({ view?.isInHierarchy(of: $0) }) == true {
            self.datePicker?.tintColor = ColorName.colorMain.color
        }
        return view
    }
}
