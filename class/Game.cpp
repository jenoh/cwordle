#include "Game.hpp"
#include <string>
#include <iostream>

using namespace std;


Game::Game() {
    setRandomWord();
}
void Game::setRandomWord() {
    word = "VAGUE";
    tries = 5;
}
bool Game::verify(string user_try) {

    for (int i = 0; i < user_try.size(); i++) {
        if (user_try[i] == word[i]) {
            currentSolution[i] = 2;
        } else {
            currentSolution[i] = 0;
        }
    }
    if (user_try == word) {
        return true;
    }
    tries--;
    return false;
}

 