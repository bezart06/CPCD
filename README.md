<h1 align="center">CPCD</h1>
<p align="center">
  <b>C</b>omputer <b>P</b>ersonal <b>C</b>ontrol <b>D</b>ashboard
</p>

<p align="center">
  A comprehensive, modern utility toolkit designed to redefine how developers and power users interact with their operating systems.
  <br>
  <i>Monitor. Control. Customize.</i>
</p>

<div align="center">

[![License: GPL v3](https://img.shields.io/badge/License-GPLv3-darkblue.svg)](LICENSE)
[![Platform](https://img.shields.io/badge/Platform-Windows%20%7C%20Linux-darkgreen.svg)]()
[![Status](https://img.shields.io/badge/Status-Active%20Development-darkred.svg)]()

</div>

---

## Vision

**CPCD** is evolving from a simple focus tool into a universal interface for PC interaction. The goal is to provide a unified dashboard that offers:
1.  **Deep System Insight:** Real-time telemetry on hardware, processes, and connected displays.
2.  **Alternative Input Control:** Bridging the gap between gaming peripherals and desktop productivity.
3.  **Cross-Platform Consistency:** A seamless experience whether you are on Windows 11 or a Wayland-based Linux distro.

## Key Features (Planned & Current)

* **🛡️ Legacy Lock Mode:** The original distraction-free full-screen blocking (currently available).
* **⚙️ Smart Launcher:** A dedicated startup configuration window to tweak settings before the main app engages.
* **🎮 Gamepad-as-Mouse:** Use your Xbox, PlayStation, or Switch controller to navigate the Windows desktop with precision.
* **📊 System Telemetry:** Live data output regarding monitor states, active processes, and system resources.
* **🎨 Modern UI:** 
   * **Windows:** Built on **WinUI** for a native, fluent aesthetic.
   * **Linux:** Utilizing **GTK4/Qt6** for perfect integration with modern desktop environments (Wayland support).

## Roadmap

Our development path is prioritized by complexity, ensuring a stable foundation before expanding into complex driver/UI integrations.

### Phase 1: Foundation & Data (The "Utility" Update)
*Focus: Internal logic, data gathering, and user configuration.*
- [ ] **Startup Configuration Module:** Implementation of a pre-launch window to select modes and settings (e.g., choosing between "Lock Mode" or "Dashboard Mode").
- [ ] **System Data Collector:**
    - Detect and list all connected monitors (Resolution, Refresh Rate, HDR status).
    - Real-time process enumeration.
    - Basic hardware info output (CPU/RAM usage).

### Phase 2: Input & Interaction (The "Control" Update)
*Focus: Bridging hardware and software inputs.*
- [ ] **Gamepad Input Bridge (Windows):** 
    - Map analog sticks to mouse cursor movement.
    - Map face buttons to Left/Right clicks and system shortcuts.
    - Support for XInput devices (Xbox) and DirectInput.
- [ ] **Advanced Monitor Control:** Software-based brightness/contrast control for external monitors (DDC/CI).

### Phase 3: The Visual Overhaul (The "Modern" Update)
*Focus: Rewriting the presentation layer for a premium user experience.*
- [ ] **Windows UI Migration:** Porting the interface to **WinUI 3** (Windows App SDK) for a modern, responsive design.
- [ ] **Dashboard Overlay:** A HUD mode that overlays system stats on top of other windows non-intrusively.

### Phase 4: Cross-Platform Expansion (The "Linux" Update)
*Focus: Porting and ecosystem integration.*
- [ ] **Linux Port:** Native support for Linux systems.
    - **Wayland** compatibility implementation.
    - **UI Framework:** Adoption of GTK4 or Qt6.
- [ ] **Package Distribution:** - `.deb` / `.rpm` packages.
    - Flatpak support for universal installation.

### Future Concepts (Ideas for v1.0+)
- [ ] **Macro Engine:** Record and bind complex keyboard/mouse macros to Gamepad buttons.
- [ ] **Remote Dashboard (or Companion App):** View PC stats and control media playback from a smartphone via local Wi-Fi.
- [ ] **Plugin System:** Allow the community to write scripts to extend CPCD capabilities.

## Installation

### Windows
*Currently, you can build from source using Visual Studio.*

1.  Clone the repository:
    ```bash
    git clone https://github.com/bezart06/CPCD.git
    ```
2.  Open the folder in **Visual Studio 2022/2026**.
3.  Select your configuration (recommend `x64-Release`) and hit **Build**.

*(Binaries will be available in the Releases)*

## 🤝 Contributing

We are in the process of a major refactor to meet the new vision! We welcome developers interested in:
* **C++20** & Systems Programming.
* **WinUI / XAML** (for Windows frontend).
* **Qt / GTK4** (for Linux frontend).
* **Input APIs**.

Please see [CONTRIBUTING.md](CONTRIBUTING.md) for details on how to get started.

## 📧 Feedback & Support

Have an idea for a feature? Found a bug?
* Open an [Issue](https://github.com/bezart06/CPCD/issues) on GitHub.
* Contact the maintainer: `bezart06@gmail.com`

---
<p align="center">
  <i>CPCD is open-source software licensed under the <a href="LICENSE">GPLv3 License</a>.</i>
</p>
