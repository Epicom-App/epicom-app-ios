// swiftlint:disable all
// Generated using SwiftGen — https://github.com/SwiftGen/SwiftGen

#if os(macOS)
  import AppKit
#elseif os(iOS)
  import UIKit
#elseif os(tvOS) || os(watchOS)
  import UIKit
#endif

// Deprecated typealiases
@available(*, deprecated, renamed: "ImageAsset.Image", message: "This typealias will be removed in SwiftGen 7.0")
internal typealias AssetImageTypeAlias = ImageAsset.Image

// swiftlint:disable superfluous_disable_command file_length implicit_return

// MARK: - Asset Catalogs

// swiftlint:disable identifier_name line_length nesting type_body_length type_name
internal enum Asset {
  internal static let mapCalendarIcon = ImageAsset(name: "map_calendar_icon")
  internal static let mapInfoLinkIcon = ImageAsset(name: "map_info_link_icon")
  internal static let mapLocationIcon = ImageAsset(name: "map_location_icon")
  internal static let riskAnnotationIcon = ImageAsset(name: "risk_annotation_icon")
  internal static let icBugOutline = ImageAsset(name: "ic-bug-outline")
  internal static let iconSettings = ImageAsset(name: "iconSettings")
  internal static let icAlertOutline = ImageAsset(name: "ic-alert-outline")
  internal static let icCalendarRange = ImageAsset(name: "ic-calendar-range")
  internal static let icClockTimeNineOutline = ImageAsset(name: "ic-clock-time-nine-outline")
  internal static let icOfficeBuildingMarkerOutline = ImageAsset(name: "ic-office-building-marker-outline")
  internal static let icPhone = ImageAsset(name: "ic-phone")
  internal static let icSocialDistance2Meters = ImageAsset(name: "ic-social-distance-2-meters")
  internal static let onbArrowBottomBig = ImageAsset(name: "onbArrowBottomBig")
  internal static let onbArrowBottomRightBig = ImageAsset(name: "onbArrowBottomRightBig")
  internal static let onbArrowBottomRightSmall = ImageAsset(name: "onbArrowBottomRightSmall")
  internal static let onbArrowTopLeftSmall = ImageAsset(name: "onbArrowTopLeftSmall")
  internal static let onboardingCalendarImage = ImageAsset(name: "onboardingCalendarImage")
  internal static let onboardingIconCheckmark = ImageAsset(name: "onboardingIconCheckmark")
  internal static let onboardingIconInfo = ImageAsset(name: "onboardingIconInfo")
  internal static let onboardingLocationTopImage = ImageAsset(name: "onboardingLocationTopImage")
  internal static let onboardingMapExample = ImageAsset(name: "onboardingMapExample")
  internal static let onboardingMapInfoView = ImageAsset(name: "onboardingMapInfoView")
  internal static let onboardingNotificationsImage = ImageAsset(name: "onboardingNotificationsImage")
  internal static let onboardingRiskMapExample = ImageAsset(name: "onboardingRiskMapExample")
  internal static let splashLogoIcon = ImageAsset(name: "splash_logo_icon")
  internal static let tabBarHelpIcon = ImageAsset(name: "tabBar_help_icon")
  internal static let tabBarMapIcon = ImageAsset(name: "tabBar_map_icon")
  internal static let tabBarSettingsIcon = ImageAsset(name: "tabBar_settings_icon")
  internal static let tabBarUploadIcon = ImageAsset(name: "tabBar_upload_icon")
}
// swiftlint:enable identifier_name line_length nesting type_body_length type_name

// MARK: - Implementation Details

internal struct ImageAsset {
  internal fileprivate(set) var name: String

  #if os(macOS)
  internal typealias Image = NSImage
  #elseif os(iOS) || os(tvOS) || os(watchOS)
  internal typealias Image = UIImage
  #endif

  internal var image: Image {
    let bundle = BundleToken.bundle
    #if os(iOS) || os(tvOS)
    let image = Image(named: name, in: bundle, compatibleWith: nil)
    #elseif os(macOS)
    let name = NSImage.Name(self.name)
    let image = (bundle == .main) ? NSImage(named: name) : bundle.image(forResource: name)
    #elseif os(watchOS)
    let image = Image(named: name)
    #endif
    guard let result = image else {
      fatalError("Unable to load image named \(name).")
    }
    return result
  }
}

internal extension ImageAsset.Image {
  @available(macOS, deprecated,
    message: "This initializer is unsafe on macOS, please use the ImageAsset.image property")
  convenience init!(asset: ImageAsset) {
    #if os(iOS) || os(tvOS)
    let bundle = BundleToken.bundle
    self.init(named: asset.name, in: bundle, compatibleWith: nil)
    #elseif os(macOS)
    self.init(named: NSImage.Name(asset.name))
    #elseif os(watchOS)
    self.init(named: asset.name)
    #endif
  }
}

// swiftlint:disable convenience_type
private final class BundleToken {
  static let bundle: Bundle = {
    Bundle(for: BundleToken.self)
  }()
}
// swiftlint:enable convenience_type
