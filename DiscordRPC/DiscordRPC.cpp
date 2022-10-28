#include <iostream>
#include "Discord.h"
#include <chrono>

using namespace std;

Discord *discord;

int main()
{
    cout << "Discord Rich Presence by st0pcha." << endl;

    static int64_t StartTime = chrono::duration_cast<chrono::seconds>(chrono::system_clock::now().time_since_epoch()).count();

    discord->Initialize("792818909844996139"); // Application Client ID
    discord->Update("Hm.. Is it good idea?", "Learning C++", StartTime, "avatar", "Yes", "logo", "No"); // Presence "configuration"?
       
    cout << "Press escape for shutdown" << endl;

    while (true) {
        if (GetAsyncKeyState(VK_ESCAPE)) {
            Discord_Shutdown();
            PostMessage(GetConsoleWindow(), WM_CLOSE, 0, 0);
        }
    }

    return 0;
}