source 'https://cdn.cocoapods.org/'

platform :ios,'11.0'
use_frameworks!
inhibit_all_warnings!

def pods

    # code analyser / generator
    pod 'SwiftGen', '~> 6.0'
    pod 'SwiftLint', '~> 0.39'

    # network
    pod 'ReachabilitySwift', '~> 5.0.0'
    
    # reporting
    pod 'AppCenter/Crashes', '~> 3.0'
    pod 'AppCenter/Distribute', '~> 3.0'
    
    # UI
    pod 'UIColor_Hex_Swift', '~> 5.1.0'
    
    #licenses
    pod 'LicensePlist', '~> 3.0'
    
end

target 'Ebolapp' do
    pods

    target 'EbolappTests' do
      inherit! :search_paths
    end

end

target 'EbolappWidgetExtension' do
    pod 'UIColor_Hex_Swift', '~> 5.1.0'
end

target 'EbolappUITests' do
end
