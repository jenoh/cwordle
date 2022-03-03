#include "Game.hpp"
#include <string>

using namespace std;


Game::Game() {
    setRandomWord();
}
void Game::setRandomWord() {
    word = "VAGUE";
    tries = 5;
}
void Game::verify() {
    tries--;
}
