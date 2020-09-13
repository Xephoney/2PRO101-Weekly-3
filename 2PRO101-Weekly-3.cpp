#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

void PlayerVsComputer();
void PlayerVsPlayer();

int main()
{
    //This code is to maximize the window on startup! 
    //Taken from : https://stackoverflow.com/questions/6606884/setting-console-to-maximized-in-dev-c 
        HWND hWnd = GetConsoleWindow();
        ShowWindow(hWnd, SW_SHOWMAXIMIZED);

    
    cout << "    _______  __   __  _______  _______  _______    _______  __   __  _______      __    _  __   __  __   __  _______  _______  ______    __  " << endl;
    cout << "   |       ||  | |  ||       ||       ||       |  |       ||  | |  ||       |    |  |  | ||  | |  ||  |_|  ||  _    ||       ||    _ |  |  | " << endl;
    cout << "   |    ___||  | |  ||    ___||  _____||  _____|  |_     _||  |_|  ||    ___|    |   |_| ||  | |  ||       || |_|   ||    ___||   | ||  |  | " << endl;
    cout << "   |   | __ |  |_|  ||   |___ | |_____ | |_____     |   |  |       ||   |___     |       ||  |_|  ||       ||       ||   |___ |   |_||_ |  | " << endl;
    cout << "   |   ||  ||       ||    ___||_____  ||_____  |    |   |  |       ||    ___|    |  _    ||       ||       ||  _   | |    ___||    __  ||__| " << endl;
    cout << "   |   |_| ||       ||   |___  _____| | _____| |    |   |  |   _   ||   |___     | | |   ||       || ||_|| || |_|   ||   |___ |   |  | | __  " << endl;
    cout << "   |_______||_______||_______||_______||_______|    |___|  |__| |__||_______|    |_|  |__||_______||_|   |_||_______||_______||___|  |_||__|" << endl;
    cout << endl << endl;

    cout << " Welcome to Guess The Number! \n";
    int gamemode = 1;
    
    do
    {
        system("CLS");
        cout << " What would you like to do? \n";
        cout << "   [1] Play against the Computer \n";
        cout << "   [2] Player VS Player \n \n";
        cout << "   [0] Exit \n";
        cin >> gamemode;

        switch (gamemode)
        {
        case 0 :
            cout << "Bye Bye!";
            return 0;
        case 1 : 
            Sleep(2000);
            PlayerVsComputer();
            break;
        case 2 : 
            cout << "Okay! PVP it is! ;) Bring your A-game!\n";
            Sleep(2000);
            PlayerVsPlayer();
            break;
        default:
            cout << "Sorry, that is not a vaild answer. Try again! :) \n";
            Sleep(1500);
            break;
        }
    } while (gamemode >= 0 || gamemode < 3);
}

void PlayerVsComputer()
{


}
void PlayerVsPlayer()
{

}
