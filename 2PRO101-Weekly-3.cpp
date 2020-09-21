#include <iostream>
#include <string>
#include <Windows.h>
#include <time.h>

using namespace std;

void PlayerVsComputer();

int difficulty;
int currentHighscore = 5000;
int main()
{
    //This code is to maximize the window on startup! 
    //Taken from : https://stackoverflow.com/questions/6606884/setting-console-to-maximized-in-dev-c 
        HWND hWnd = GetConsoleWindow();
        ShowWindow(hWnd, SW_SHOWMAXIMIZED);
        
        std::srand((unsigned)time(0));
    
        int gamemode = 1;
    
    do
    {
        cout << "    _______  __   __  _______  _______  _______    _______  __   __  _______      __    _  __   __  __   __  _______  _______  ______    __  " << endl;
        cout << "   |       ||  | |  ||       ||       ||       |  |       ||  | |  ||       |    |  |  | ||  | |  ||  |_|  ||  _    ||       ||    _ |  |  | " << endl;
        cout << "   |    ___||  | |  ||    ___||  _____||  _____|  |_     _||  |_|  ||    ___|    |   |_| ||  | |  ||       || |_|   ||    ___||   | ||  |  | " << endl;
        cout << "   |   | __ |  |_|  ||   |___ | |_____ | |_____     |   |  |       ||   |___     |       ||  |_|  ||       ||       ||   |___ |   |_||_ |  | " << endl;
        cout << "   |   ||  ||       ||    ___||_____  ||_____  |    |   |  |       ||    ___|    |  _    ||       ||       ||  _   | |    ___||    __  ||__| " << endl;
        cout << "   |   |_| ||       ||   |___  _____| | _____| |    |   |  |   _   ||   |___     | | |   ||       || ||_|| || |_|   ||   |___ |   |  | | __  " << endl;
        cout << "   |_______||_______||_______||_______||_______|    |___|  |__| |__||_______|    |_|  |__||_______||_|   |_||_______||_______||___|  |_||__|" << endl;
        cout << endl << endl;

        cout << " Welcome to Guess The Number! \n";
        
        cout << " How lucky do you feel? \n";
        cout << "   [1] Easy (1 - 5) \n";
        cout << "   [2] Medium (1 - 10) \n";
        cout << "   [3] Hard (1 - 20) \n";
        cout << "   [4] Extreme (1 - 50) \n\n";
        cout << "   [0] Exit \n";
        cin >> gamemode;

        switch (gamemode)
        {
        case 1 : 
            difficulty = 5;
            PlayerVsComputer();
            break;
        case 2 : 
            difficulty = 10;
            PlayerVsComputer();
            break;
        case 3:
            difficulty = 20;
            PlayerVsComputer();
            break;
        case 4:
            difficulty = 50;
            PlayerVsComputer();
            break;
        default:
            std::cout << "Well Bye! ";
            break;
        }
        system("CLS");
    } while (gamemode > 0 && gamemode < 5);


}
void PlayerVsComputer()
{
    int guess = 0;
    int guesses = 0;
    int randomNR = std::rand() % difficulty + 1;
    std::cout << "Dbug random number = " << randomNR << "\n";
    //std::cout << "Select a number between 1 - " << randomNR << " : ";

    do
    {
        std::cout << "What's your guess? \n";
        std::cin >> guess;

        guesses++;
        if (guess < randomNR)
        {
            std::cout << "Higher... \n";
        }
        else if (guess > randomNR)
        {
            std::cout << "Lower... \n";
        }
        else if (guess == randomNR)
        {
            std::cout << "Eyy! You did it! \n";
        }
    } while (guess != randomNR);

    if (guesses < currentHighscore)
    {
        std::cout << "Congratulations! You get the new highscore of " << guesses << " tries! Well played Sir! \n\n";
    }
    system("pause");
}

