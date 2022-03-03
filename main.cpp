#include <iostream>
#include <string>
#include "class/Game.hpp"
using namespace std;

int main()
{
    // clear prompt
    cout << "\033[2J\033[H";

    // choose a random word
    Game game;
    cout << game.getWord();
    return 0;
}