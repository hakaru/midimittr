# Changelog

All notable changes to this project will be documented in this file.

The format is based on [Keep a Changelog](https://keepachangelog.com/en/1.0.0/),
and this project adheres to [Semantic Versioning](https://semver.org/spec/v2.0.0.html).

## [Unreleased]

### Added
- CHANGELOG.md to track version history
- TODO.md based on IMPROVEMENT_ROADMAP.md
- Fork information in README.md
- Comprehensive Japanese user guide (docs/USER_GUIDE_ja.md) covering:
  - BLE basics and comparison with Classic Bluetooth
  - MIDI over BLE technology explanation
  - Detailed app usage instructions
  - Troubleshooting guide
  - FAQ section with 8 common questions

### Changed
- **BREAKING:** Migrated dependency management from Carthage to Swift Package Manager
  - All external dependencies now managed via SPM
  - Removed `Cartfile` and `Cartfile.resolved`
  - Created fork of [Peertalk](https://github.com/hakaru/peertalk) with SPM support
- **BREAKING:** Changed bundle identifier from `com.matt.MIDI-LE` to `com.hakaru.midimittr`
- Updated code signing to use Automatic Signing
- Modernized import statements:
  - Headers use forward declarations (`@class PTChannel;`)
  - Implementation files use module imports (`@import Peertalk;`)
- Enabled C++ modules support for `.mm` files via `OTHER_CPLUSPLUSFLAGS`
- Updated README.md build instructions for SPM workflow
- Removed Carthage build dependencies from Xcode project:
  - Removed `Peertalk.xcframework` reference
  - Removed legacy framework search paths

### Fixed
- Build compatibility with modern Xcode versions (14.0+)
- Module import issues in Objective-C++ files

### Removed
- Carthage dependency manager support
- `Cartfile` and `Cartfile.resolved`
- Legacy framework references in Xcode project

---

## Notes

This fork is maintained by [hakaru](https://github.com/hakaru) based on the original [sieren/midimittr](https://github.com/sieren/midimittr) project.
