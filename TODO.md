# midimittr TODO

This document tracks the improvement roadmap for the midimittr project. For detailed context, see [docs/IMPROVEMENT_ROADMAP.md](docs/IMPROVEMENT_ROADMAP.md).

## Phase 1: Stabilization and Test Infrastructure (Short-term)

### 1.1 Unit Testing
- [ ] Introduce `XCTest` for core logic in `MIDIController`
  - [ ] Test device list management
  - [ ] Test routing state persistence
  - [ ] Mock MIDI message routing and validate forwarding logic

### 1.2 Eliminate Dangerous Global Variables
- [ ] Refactor `thisClass` global variable in `MIDIController.mm`
  - [ ] Consider singleton pattern (`shared` instance) or proper dependency injection
  - [ ] Ensure proper lifecycle management

### 1.3 Error Handling Improvements
- [ ] Replace `NSAssert` with proper error handling
  - [ ] Return `Error` types or use delegate-based notifications
  - [ ] Add user-facing alerts for MIDI device access permission issues
  - [ ] Prevent unexpected app crashes in production

---

## Phase 2: Modernization (Mid-term)

### 2.1 Swift Migration of MIDIController
- [ ] Rewrite `MIDIController` in Swift
  - [ ] Use type-safe CoreMIDI Swift wrappers
  - [ ] Replace C-style macros with Swift functions
  - [ ] Improve memory safety with Swift's ownership model

### 2.2 Normalize Background Processing
- [ ] Review silent MP3 playback approach (potential App Store guideline risk)
- [ ] Configure proper background modes: `audio`, `bluetooth-central`, `bluetooth-peripheral`
- [ ] Ensure compliance with Apple's background execution policies

### 2.3 Dependency Management Migration ✅ **COMPLETED**
- [x] Migrate from Carthage to Swift Package Manager
- [x] Fork and add SPM support to Peertalk dependency
- [x] Update Xcode project configuration
- [x] Remove Carthage-related files

---

## Phase 3: Architecture Refactoring (Long-term)

### 3.1 Introduce MVVM Pattern
- [ ] Extract business logic from View Controllers
  - [ ] Create `MIDIPortsViewModel` for presentation logic
  - [ ] Use `Combine` or Swift Concurrency for reactive state updates
  - [ ] Separate UI state from MIDI device state management

### 3.2 Reduce AppDelegate Responsibilities
- [ ] Introduce Coordinator pattern for navigation
  - [ ] Move screen transition logic out of `AppDelegate`
  - [ ] Centralize dependency injection in dedicated coordinator classes

---

## Completion Criteria

### Phase 1 Completion
- Main logic has >50% test coverage
- All crash-prone `NSAssert` statements removed

### Phase 2 Completion
- `MIDIController` fully rewritten in Swift
- Project builds without warnings

### Phase 3 Completion
- UI logic separated from View Controllers
- View Controller code size significantly reduced
- Coordinator pattern successfully managing navigation flow

---

## Notes

This roadmap is based on [docs/IMPROVEMENT_ROADMAP.md](docs/IMPROVEMENT_ROADMAP.md). Check the roadmap document for detailed rationale and implementation strategies.
