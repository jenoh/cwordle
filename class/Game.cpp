#include "Game.hpp"
#include <string>

using namespace std;


Game::Game() {
    setRandomWord();
}
void Game::setRandomWord() {
    word = "VAGUE";
}
