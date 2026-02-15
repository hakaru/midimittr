![Travis CI](https://travis-ci.org/sieren/midimittr.svg?branch=master "Travis CI
Status")
[![Platform](https://img.shields.io/cocoapods/p/NotificationBannerSwift.svg?style=flat)](http://cocoapods.org/pods/NotificationBannerSwift)
<a href="https://developer.apple.com/swift"><img src="https://img.shields.io/badge/swift-4.0-4BC51D.svg?style=flat" alt="Language: Swift" /></a>
[![License](https://img.shields.io/github/license/sieren/midimittr.svg?style=flat)](http://cocoapods.org/pods/NotificationBannerSwift)
## midmittr

> This is a fork of [sieren/midimittr](https://github.com/sieren/midimittr) maintained by hakaru. See [CHANGELOG.md](CHANGELOG.md) for modifications.

midimittr is a lightweight iOS utility to initiate MIDI over Bluetooth LE or USB-Lightning connections with simple routing options.

![alt text](https://raw.githubusercontent.com/sieren/midimittr/master/media/example1.png "midimittr MIDI Devices" )
![alt text](https://raw.githubusercontent.com/sieren/midimittr/master/media/example2.png "midimittr BLE Clients")
## Features
- Connect to other MIDI over Bluetooth devices ✅
- Use MIDI over USB-Lightning with the [midimittr desktop app ](https://github.com/sieren/midimittrusb)✅
- Works in background ✅
- iPhone, iPhone X, & iPad Support ✅
- Remember previous routing settings✅

[![app store](https://linkmaker.itunes.apple.com/assets/shared/badges/en-us/appstore-lrg.svg)](https://itunes.apple.com/us/app/midimittr/id925495245?mt=8)

## Requirements

 - iOS 9.0+
 - Xcode 14.0+
 - Swift Package Manager (integrated with Xcode)

## Installation

### Swift Package Manager

All dependencies are managed via Swift Package Manager and will be resolved automatically by Xcode:

- [SnapKit](https://github.com/SnapKit/SnapKit)
- [NotificationBannerSwift](https://github.com/Daltron/NotificationBanner)
- [MarqueeLabel](https://github.com/cbpowell/MarqueeLabel)
- [Peertalk](https://github.com/hakaru/peertalk) (forked for SPM support)

Simply open `midimittr.xcodeproj` in Xcode and build. Dependencies will be fetched automatically.

### Swiftlint

Ensure `swiftlint` is installed (`brew install swiftlint`) to ensure Swift style compliance.

## Feature Requests

I'd love to know anything that you think midimittr is missing. Open an issue and I'll add the `feature request` label to it and I'll do everything I can to accomodate that request.

## Donation

midimittr is developed in my spare time and requires a yearly app-store subscription (99$). If this project helps you in any way, consider a small donation :)

[![paypal](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_donations&business=WC74EF774344J&lc=US&item_name=midimittr&no_note=0&no_shipping=1&currency_code=EUR&bn=PP%2dDonationsBF%3abtn_donateCC_LG%2egif%3aNonHostedJ)

## Documentation

- **[User Guide (Japanese)](docs/USER_GUIDE_ja.md)**: Comprehensive guide for beginners, including BLE basics, MIDI over BLE explanation, and detailed usage instructions
- **[Arduino, Desktop and FAQ](http://www.s-r-n.de/midimittr)**: Further information about midimittr and Bluetooth over MIDI, as well as other projects like Bluetooth over MIDI on certain Arduino boards
## License

midimittr is available under the Apache 2.0 license. See the LICENSE file for more info.

Although technically allowed by the licensing terms, please do not simply submit your own version of midimittr to the App Store.


## Author

Matthias Frick, matthias[at]s-r-n.de