# Hacking Submission - DigiKeyboard Script

This repository contains an Arduino sketch designed for the DigiSpark (Attiny85) development board using the `DigiKeyboard.h` library.

## Project Overview

The `keyboard_script.ino` file is a payload that performs the following actions upon being plugged into a target machine:

1.  **Opens the Run dialog**: Uses `GUI+R` to trigger the Windows Run box.
2.  **Executes a PowerShell command**: Launches a hidden PowerShell instance that:
    *   Takes a screenshot of the primary screen and saves it as `b.png` in the temp folder.
    *   Sets that screenshot as the desktop wallpaper.
    *   Restarts the `explorer` process.
    *   Downloads a `.wav` file from a remote GitHub repository.
    *   Downloads a command string from a provided URL.
    *   Keylogger-like behavior: Plays the sound and toggles CapsLock whenever a key is pressed.
    *   Remote command execution: Periodically checks the command URL for updates and executes any new commands via `IEX`.

## Files

- [keyboard_script.ino](keyboard_script.ino): The main Arduino source code.

## Disclaimer

This project is for educational purposes only. Unauthorized use of this script on computers you do not own or have permission to test is illegal and unethical.

