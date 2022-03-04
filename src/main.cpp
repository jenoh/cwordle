#include <iostream>
#include <string>
#include <algorithm>
#include <termcolor/termcolor.hpp>

#include "Game.hpp"

using namespace std;

void printSolution(string user_try, int* curent_solutions);

int main()
{
    // clear prompt
    cout << "\033[2J\033[H" << endl;

    Game game;
    string user_try;
    bool end_game;

    while (game.getTries() > 0)
    {
        cout << endl << "You have alwready : " << game.getTries() << (game.getTries() != 1 ? " tries" : " try") << endl;
        cout << "Guess the wordle : ";
        cin >> user_try;
        transform(user_try.begin(), user_try.end(), user_try.begin(), ::toupper);
        end_game = game.verify(user_try);
        printSolution(user_try, game.getCurrentSolutions());
        if (end_game) {
            cout << endl << termcolor::green << "Well done !!" << termcolor::reset << endl;
            return 0;
        }
    }
    cout << endl << termcolor::red << "The wordle was: " << game.getWord() << termcolor::reset << endl;
};

void printSolution(string user_try, int* current_solutions) {
    for (int i = 0; i < user_try.size(); i++) {
        switch ( current_solutions[i] ) {
            case 0:
                cout << user_try[i];
                break;
            case 1:
                cout << termcolor::yellow << user_try[i] << termcolor::reset;
                break;
            case 2:
                cout << termcolor::green << user_try[i] << termcolor::reset;
                break;
        }
    }
}
