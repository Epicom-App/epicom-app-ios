// swiftlint:disable all
// Generated using SwiftGen — https://github.com/SwiftGen/SwiftGen

#if os(OSX)
  import AppKit.NSColor
  internal typealias Color = NSColor
#elseif os(iOS) || os(tvOS) || os(watchOS)
  import UIKit.UIColor
  internal typealias Color = UIColor
#endif

// swiftlint:disable superfluous_disable_command file_length implicit_return

// MARK: - Colors

// swiftlint:disable identifier_name line_length type_body_length
internal struct ColorName {
  internal let rgbaValue: UInt32
  internal var color: Color { return Color(named: self) }

  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#1a1a1a"></span>
  /// Alpha: 100% <br/> (0x1a1a1aff)
  internal static let colorBgDark = ColorName(rgbaValue: 0x1a1a1aff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#000000"></span>
  /// Alpha: 100% <br/> (0x000000ff)
  internal static let colorBlack = ColorName(rgbaValue: 0x000000ff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#007aff"></span>
  /// Alpha: 100% <br/> (0x007affff)
  internal static let colorBlue = ColorName(rgbaValue: 0x007affff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#3a80d1"></span>
  /// Alpha: 100% <br/> (0x3a80d1ff)
  internal static let colorFillAccentColor = ColorName(rgbaValue: 0x3a80d1ff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#808080"></span>
  /// Alpha: 100% <br/> (0x808080ff)
  internal static let colorFillGrey = ColorName(rgbaValue: 0x808080ff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#010d0e"></span>
  /// Alpha: 100% <br/> (0x010d0eff)
  internal static let colorFillPrimaryBase = ColorName(rgbaValue: 0x010d0eff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#29293a"></span>
  /// Alpha: 100% <br/> (0x29293aff)
  internal static let colorFillSecondaryColor = ColorName(rgbaValue: 0x29293aff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#4db7dd"></span>
  /// Alpha: 100% <br/> (0x4db7ddff)
  internal static let colorLocation = ColorName(rgbaValue: 0x4db7ddff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#244260"></span>
  /// Alpha: 100% <br/> (0x244260ff)
  internal static let colorMain = ColorName(rgbaValue: 0x244260ff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#be6161"></span>
  /// Alpha: 100% <br/> (0xbe6161ff)
  internal static let colorRed = ColorName(rgbaValue: 0xbe6161ff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#3c4043"></span>
  /// Alpha: 60% <br/> (0x3c404399)
  internal static let colorSecondaryText = ColorName(rgbaValue: 0x3c404399)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#e3e8ea"></span>
  /// Alpha: 90% <br/> (0xe3e8eae6)
  internal static let colorSliderScale = ColorName(rgbaValue: 0xe3e8eae6)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#ffffff"></span>
  /// Alpha: 100% <br/> (0xffffffff)
  internal static let colorWhite = ColorName(rgbaValue: 0xffffffff)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#000000"></span>
  /// Alpha: 60% <br/> (0x00000099)
  internal static let datesInfoDark = ColorName(rgbaValue: 0x00000099)
  /// <span style="display:block;width:3em;height:2em;border:1px solid black;background:#ffffff"></span>
  /// Alpha: 60% <br/> (0xffffff99)
  internal static let datesInfoLight = ColorName(rgbaValue: 0xffffff99)
}
// swiftlint:enable identifier_name line_length type_body_length

// MARK: - Implementation Details

internal extension Color {
  convenience init(rgbaValue: UInt32) {
    let components = RGBAComponents(rgbaValue: rgbaValue).normalized
    self.init(red: components[0], green: components[1], blue: components[2], alpha: components[3])
  }
}

private struct RGBAComponents {
  let rgbaValue: UInt32

  private var shifts: [UInt32] {
    [
      rgbaValue >> 24, // red
      rgbaValue >> 16, // green
      rgbaValue >> 8,  // blue
      rgbaValue        // alpha
    ]
  }

  private var components: [CGFloat] {
    shifts.map {
      CGFloat($0 & 0xff)
    }
  }

  var normalized: [CGFloat] {
    components.map { $0 / 255.0 }
  }
}

internal extension Color {
  convenience init(named color: ColorName) {
    self.init(rgbaValue: color.rgbaValue)
  }
}
