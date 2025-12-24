# Security & Privacy Policy for CPCD

The CPCD team takes the security and privacy of our users seriously. As CPCD evolves into a comprehensive system dashboard, we are committed to transparency regarding how we interact with your operating system and data.

## Supported Versions

| Version | Supported          | Notes |
| ------- | ------------------ | ----- |
| 0.1.X   | :white_check_mark: | Current Dev Branch |
| < 0.1.0 | :x:    | Unsupported |

## Reporting a Vulnerability

If you discover a security vulnerability in CPCD, please report it to us privately.
**Do NOT report security vulnerabilities through public GitHub issues.**

Please email: `bezart06@gmail.com`

Include:
* Description of the vulnerability.
* Steps to reproduce.
* Affected version.
* Proof-of-concept (if available).

We will acknowledge receipt within 72 hours.

## Security Considerations

CPCD operates with significant system access. We want you to be aware of the implications:

* **Input Injection (Gamepad-as-Mouse):** CPCD synthesizes mouse and keyboard events. We ensure these features cannot be hijacked by third-party remote scripts, but users should be aware that the application controls the cursor.
* **System Locking:** The legacy "Lock Mode" blocks standard input. While we are making the exit mechanism customizable, using this feature always carries a risk of locking yourself out if the hardware fails.
* **Elevated Privileges:** Some dashboard features (e.g., process management, global hooks) may require Administrator/Root privileges. We strive to follow the Principle of Least Privilege.

## Privacy Policy (Data Collection)

As part of the "Dashboard" functionality, CPCD collects local system data to display it to you.

* **What we collect locally:**
    * Running process lists (names, PIDs, resource usage).
    * Hardware stats (CPU/RAM/GPU usage).
    * Monitor capability data (EDID, resolution, refresh rates).
* **Data Transmission:**
    * **CPCD DOES NOT transmit this data to any external server.** All telemetry is processed and displayed locally on your machine.
    * We do not track user behavior or build user profiles.

## Scope

This policy applies to the CPCD application itself. It does not cover the security of the operating system or third-party libraries used (e.g., Qt, WinUI).
