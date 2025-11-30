// CPCD App

#include <iostream>
#define VERSION "0.1.2"

#ifdef _WIN32
#include <windows.h>
#elif __linux__
#include <unistd.h>
#endif

HHOOK hKeyboardHook;
bool blockInput = true;
bool rightCtrlPressed = false;
bool rightAltPressed = false;

static LRESULT CALLBACK LowLevelKeyboardProc(int nCode, WPARAM wParam, LPARAM lParam) {
    if (nCode == HC_ACTION) {
        auto* pKeyboard = reinterpret_cast<KBDLLHOOKSTRUCT *>(lParam);

        if (wParam == WM_KEYDOWN || wParam == WM_SYSKEYDOWN) {
            if (pKeyboard->vkCode == VK_RCONTROL) {
                rightCtrlPressed = true;
            }
            if (pKeyboard->vkCode == VK_RMENU) {
                rightAltPressed = true;
            }

            if (rightCtrlPressed && rightAltPressed) {
                blockInput = false;
                std::cout << "Input unblocked!" << std::endl;
                UnhookWindowsHookEx(hKeyboardHook);
                return CallNextHookEx(hKeyboardHook, nCode, wParam, lParam);
            }
        }

        if (wParam == WM_KEYUP || wParam == WM_SYSKEYUP) {
            if (pKeyboard->vkCode == VK_RCONTROL) {
                rightCtrlPressed = false;
            }
            if (pKeyboard->vkCode == VK_RMENU) {
                rightAltPressed = false;
            }
        }

        if (blockInput) {
            return 1;
        }
    }
    return CallNextHookEx(hKeyboardHook, nCode, wParam, lParam);
}

static LRESULT CALLBACK WindowProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {
    switch (uMsg) {
        case WM_DESTROY:
            UnhookWindowsHookEx(hKeyboardHook);
            ShowCursor(TRUE);
            PostQuitMessage(0);
            return 0;
        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}

static void cpcd() {
#ifdef _WIN32
    WNDCLASS wc = {};
    wc.lpfnWndProc = WindowProc;
    wc.hInstance = GetModuleHandle(nullptr);
    wc.lpszClassName = "FullScreenClass";
    wc.hCursor = nullptr;

    RegisterClass(&wc);

    const int screenWidth = GetSystemMetrics(SM_CXSCREEN);
    const int screenHeight = GetSystemMetrics(SM_CYSCREEN);

    HWND fullScreenWnd = CreateWindowEx(WS_EX_LAYERED | WS_EX_TOOLWINDOW,
        "FullScreenClass", nullptr, WS_POPUP | WS_VISIBLE, 0, 0,
        screenWidth, screenHeight, nullptr, nullptr,
        GetModuleHandle(nullptr), nullptr);

    if (fullScreenWnd == nullptr) {
        std::cerr << "Failed to create window!" << std::endl;
        exit(EXIT_FAILURE);
    }

    SetLayeredWindowAttributes(fullScreenWnd, 0, 255, LWA_ALPHA);
    SetWindowPos(fullScreenWnd, HWND_TOPMOST, 0, 0,
        screenWidth, screenHeight, SWP_SHOWWINDOW);

    ShowCursor(FALSE);

    hKeyboardHook = SetWindowsHookEx(WH_KEYBOARD_LL, LowLevelKeyboardProc, nullptr, 0);
    if (!hKeyboardHook) {
        std::cerr << "Failed to set keyboard hook!" << std::endl;
        exit(EXIT_FAILURE);
    }

    MSG msg = {};
    while (GetMessage(&msg, nullptr, 0, 0)) {
        if (!blockInput) {
            ShowCursor(TRUE);
            DestroyWindow(fullScreenWnd);
            break;
        }
        TranslateMessage(&msg);
        DispatchMessage(&msg);
    }

    std::cout << "CPCD on Windows! Version: " << VERSION << std::endl;

#elif __linux__
    // ! added later !
    std::cout << "CPCD on Linux - functionality not yet implemented in version " << VERSION << std::endl;
#endif
}

int WINAPI WinMain( _In_ HINSTANCE hInstance, _In_opt_ HINSTANCE hPrevInstance, _In_ LPSTR lpCmdLine, _In_ int nCmdShow) {
    cpcd();
    return 0;
}
