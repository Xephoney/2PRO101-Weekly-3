#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;

int DifficultySelect();
void Game(int difficulty, bool twoPlayer);
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
    int _diffy = 10;
    do
    {
        //system("CLS");
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
            _diffy = DifficultySelect();
            Game(_diffy, false);
            break;
        case 2 : 
            _diffy = DifficultySelect();
            Game(_diffy, true);
            break;
        default:
            cout << "Sorry, that is not a vaild answer. Try again! :) \n";
            break;
        }
    } while (gamemode >= 0 || gamemode < 3);
}
int DifficultySelect()
{
    int input = 0;
    do
    {
        std::cout << "Select your difficulty : \n";
        std::cout << "[1] Easy (1 - 5) \n" << "[2] Medium (1 - 10) \n" << "[3] Hard (1 - 30) \n" << "How good do you think you are? : ";
        std::cin >> input;
        
        switch (input)
        {
        case 1 : 
            std::cout << "You selected Easy \n";
            return 5;
            break;
        case 2 :
            std::cout << "You selected Medium \n";
            return 10;
            break;
        case 3:
            std::cout << "You selected Hard! Oooo, i hope you fell lucky! \n";
            return 30;
            break;
        default:
            std::cout << "Sorry, that is not a valid input! Please retry! \n";
            break;
        }
    } while (input > 0 && input < 4);
    
    return 0;
}
void Game(int difficulty, bool twoPlayer)
{
    bool gameOn = true;
    int guess;
    int totalGuesses;
    int computerNumber = rand() % difficulty + 1;
    std::cout << "FOR DEBUGGIN PURPOSES : computer number is " << computerNumber << std::endl << std::endl << std::endl;
    if (twoPlayer == false)
    {
        std::cout << "Alright Lets begin! The computer has now selected a number between 1 and " << difficulty << "! \n";
        std::cout << "What is your guess? : ";
        totalGuesses = 0;
        while (gameOn) {

            std::cin >> guess;
            totalGuesses++;
            if (guess > computerNumber)
            {
                std::cout << "Lower \n";
            }
            else if (guess < computerNumber)
            {
                std::cout << "Higher \n";
            }
            else if (guess == computerNumber)
            {
                std::cout << "Yes! That is correct!\n";
                gameOn = false;
            }
        }
        std::cout << "Great Work! That only took " << totalGuesses << " tries!";
        system("pause");
        return;
    }
}
