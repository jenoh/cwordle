#include <iostream>
#include <string>
#include "class/Game.hpp"
using namespace std;

void printNbTries(int tries);

int main()
{
    Game game;
    string user_try;
    
    // clear prompt
    cout << "\033[2J\033[H" << endl;

    // choose a random word
    game.getWord();

    while (game.getTries() > 0)
    {
        printNbTries(game.getTries());
        cout << "Guess the wordle : ";
        cin >> user_try;
        game.verify();
    }
    
    return 0;
};

void printNbTries(int tries) {
    if (tries != 1) {
        cout << "You have alwready : " << tries << " tries" << endl;
    } else {
        cout << "You have alwready : " << tries << " try" << endl;
    }
}