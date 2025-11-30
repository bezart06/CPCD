<h1 align="center">CPCD</h1>

CPCD is a desktop application for PC designed to provide enhanced control over your operating system environment. It helps by limiting keyboard input (and potentially mouse usage in the future) and obscuring the screen, allowing for a distraction-free operational mode. Safe exit is managed via a specific keyboard shortcut.

Currently, in version 0.1.2, CPCD offers core full-screen input locking functionality for **Windows**. Future development aims to expand features and include support for Linux platforms.

![Logo](https://dev-to-uploads.s3.amazonaws.com/uploads/articles/th5xamgrr6se0x5ro4g6.png)

## Current Features (v0.1.2 - Windows)

* **Full-Screen Lock:** Engages a mode that covers the entire screen.
* **Keyboard Input Blocking:** Prevents most keyboard interactions while active.
* **Safe Exit:** Use **Right Ctrl + Right Alt** to exit the locked mode.

## Demo

*(A demonstration video will be available in future updates.)*

## Screenshots

*(Screenshots will be added soon to illustrate the application in action.)*


## Installation

### From Source

To build CPCD from source, you'll need a C++ compiler (supporting C++23) and CMake.

1.  Clone the repository:
    ```bash
    git clone https://github.com/bezart06/CPCD.git
    cd CPCD\
    ```
2.  Create a build directory and compile:
    ```bash
    mkdir build
    cd build\
    cmake ..
    cmake --build . --config Release
    ```
    The executable `CPCD.exe` will be located in the `build/Release` (or `build/`) directory.

### From Releases

Pre-compiled executables for Windows (version 0.1.0) are available on the [GitHub Releases page](https://github.com/Bezart06/CPCD/releases).

## Documentation

Basic usage instructions are provided in this README. More detailed documentation is planned for future releases.

[![Ask DeepWiki](https://deepwiki.com/badge.svg)](https://deepwiki.com/bezart06/CPCD)

## Contributing

Contributions are always welcome and highly appreciated! If you'd like to contribute, please see our (soon to be created) `CONTRIBUTING.md` for guidelines.

For now, you can:
* Report bugs or suggest features by creating an issue.
* Fork the repository and submit pull requests.

Please adhere to our project's Code of Conduct (link to be added).

## Authors

- [@bezart06](https://www.github.com/bezart06)

## Feedback

If you have any feedback, please reach out at bezart06@gmail.com or by opening an issue on GitHub.

## Roadmap

🟩 Version 0.1.X (*First Stable Minor Release* - **Current Version**)

🟨 Version 0.2.0 (*Interface and Usability Update*)
- Planned features:
    - Adding the ability to exit full-screen mode via a customizable keyboard shortcut.
    - Appearance of a notification when attempting to exit full-screen mode.
    - Implementation of a customization block for changing the exit shortcut.

❌ Version 0.3.0 (*Linux Support*)
- Planned features:
    - Implementation of full-screen mode with keyboard locking and support on Linux.
    - Addition of action logging to analyse program performance.   
    - Extended installation and configuration documentation for Linux.

❌ Version 0.4.0 (*Interactive Screen Control*).
- Planned features:
    - Support for application blacklist customization — ability to block switching to specific applications in full screen mode (e.g., blocking access to Task Manager).
    - Full-featured system notifications display in full-screen mode.
    - Customize full-screen window transparency.

❌ Version 1.0.0 (*First Stable Major Release*)

❌ Version 1.1.0 (*Advanced Security Settings*)
- Planned features:
    - Implementation of locking system commands (e.g. Ctrl + Alt + Del on Windows).
    - Password protection for entering/exiting full screen mode.

❌ Version 1.X.0 (*Reports and analytics*).
- Planned features:
    - Automatic generation of reports on time spent in full screen mode.
    - Statistics of keystrokes in locked state (for analyzing performance).
    - Export reports in PDF format.

❌ Version X.X.0 (*Full-featured Work ECS*)
- Planned features:
    - Built-in support for remote control via companion app (e.g., full screen control via smartphone or other PC).
    - Extended user role system with different access levels.
    - Full workspace customization via configuration files.

