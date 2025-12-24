# Contributing to CPCD

Thank you for your interest in CPCD! We are currently undergoing a major transformation from a simple utility to a complete **Computer Personal Control Dashboard**. We need your help to make this vision a reality.

## 🛠️ The Tech Stack

We are looking for contributors with experience in the following areas:

* **Core Logic:** C++20 (Standard Library).
* **Windows UI:** WinUI 3, Windows App SDK, XAML.
* **Linux Port:** C++, Wayland protocols, GTK4 or Qt6.
* **Input Systems:** XInput (Windows), or Linux solutions.

## How Can I Contribute?

### 1. Roadmap Tasks
Check our [README](README.md) roadmap and the [GitHub Issues](https://github.com/bezart06/CPCD/issues) page.
* **Good First Issues:** Look for tags like `help wanted` or `UI`.
* **Architecture:** If you have experience with Linux porting, please join the discussion on our Issues page before starting big tasks.

### 2. Reporting Bugs
If you find a bug (especially with the new multi-monitor support or gamepad drivers), please open an issue with:
* Your OS Version (e.g., Windows 11 22H2, Ubuntu 24.04).
* Hardware details (Multi-monitor setup? Controller type?).
* Steps to reproduce.

### 3. Submitting Pull Requests
1.  **Fork** the repo.
2.  **Create a branch** (`git checkout -b feature/amazing-feature`).
3.  **Commit** your changes.
4.  **Push** to the branch.
5.  **Open a Pull Request**.

## Development Setup

### Windows
* **IDE:** Visual Studio 2022 (Recommended).
* **Workloads:** "Desktop development with C++".
* **CMake:** 3.20+.

### Linux (Upcoming)
* **Compiler:** ... (Must support C++20).
* **Build System:** CMake.

## Coding Style
* **Standard:** C++20.
* **Formatting:** We generally follow LLVM.

## Code of Conduct

Please read our [CODE_OF_CONDUCT.md](CODE_OF_CONDUCT.md) before contributing.
