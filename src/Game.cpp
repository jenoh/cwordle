#include "Game.hpp"
#include <string>
#include <stdlib.h>
#include <ctime>
#include <iostream>
#include <fstream>
#include <algorithm>

using namespace std;

Game::Game() {
    setRandomWord();
    setTries();
}

void Game::setRandomWord() {
    string w;
    int nb_lines = 5757;
    int randomIndex;
    int i = 0;

    srand(time(0));
    randomIndex = (rand() % nb_lines) + 1;
    
    ifstream infile("input/words.txt");

    while (getline(infile,w))
    {
        if (i == randomIndex) {
            transform(w.begin(), w.end(), w.begin(), ::toupper);
            word = w;
        }
        i++;
    }
}

void Game::setTries() {
    tries = 5;
}

bool Game::verify(string user_try) {
    for (int i = 0; i < user_try.size(); i++) {
        if (user_try[i] == word[i]) {
            currentSolution[i] = 2;
        } else if(word.find(user_try[i])<word.length()) {
            currentSolution[i] = 1;
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

 