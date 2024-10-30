#include <Windows.h>
#include <iostream>;

void InitializeConsole() {
    AllocConsole();

    FILE* fp;
    freopen_s(&fp, "CONOUT$", "w", stdout);
    freopen_s(&fp, "CONOUT$", "w", stderr);
    freopen_s(&fp, "CONIN$", "r", stdin);

    SetConsoleOutputCP(CP_UTF8);
}

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    InitializeConsole();

    SetConsoleTitleW(L"aBLOX 1.1-S - Activating");

    std::cout << "aBLOX 1.1-S - Activating\n";
    HANDLE robloxMutex = CreateMutexW(NULL, true, L"ROBLOX_singletonMutex");
    system("cls");
    SetConsoleTitleW(L"aBLOX 1.1-S - Activated");
    std::cout << "aBLOX 1.1-S - Activated";
    
    while (true) {
        Sleep(1000);
    }

    return 0;
}

