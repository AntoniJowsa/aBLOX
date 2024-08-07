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

    SetConsoleTitleW(L"aBLOX - Activating");
    std::cout << R"(
           #******#           
         #**********#         
       %**************#       
     #******************#     
   ##*********************#   
 %#********##    %#********#% 
#*********#        #*********#
#********#          #********#
#********#          #********#
#*********#        #*********#
 %#********##    %#********#% 
   ##*********************#   
     #******************#     
       %**************#       
         #**********#         
           #******#                                                  
    )" << "\n";

    std::cout << "aBLOX - Activating\n";
    system("cls");
    HANDLE robloxMutex = CreateMutexW(NULL, true, L"ROBLOX_singletonMutex");
    SetConsoleTitleW(L"aBLOX - Activated");

    std::cout << R"(
           #******#           
         #**********#         
       %**************#       
     #******************#     
   ##*********************#   
 %#********##    %#********#% 
#*********#        #*********#
#********#          #********#
#********#          #********#
#*********#        #*********#
 %#********##    %#********#% 
   ##*********************#   
     #******************#     
       %**************#       
         #**********#         
           #******#                                                  
    )" << "\n";
    
    std::cout << "aBLOX - Activated";
    
    while (true) {
        Sleep(1000);
    }

    return 0;
}

