#ifndef GAME_HPP
#define GAME_HPP

#include <string>


class Game {
    private:
        std::string word;
        int tries;
        int currentSolution[5];
    public:
        Game();
        void setRandomWord();
        void setTries();
        bool verify(std::string user_try);
        std::string getWord() {return word;}
        int getTries() {return tries;}
        int* getCurrentSolutions() {return currentSolution;}
};
#endif