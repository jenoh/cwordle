#ifndef GAME_HPP
#define GAME_HPP

#include <string>


class Game {
    private:
        std::string word;
        int tries;
    public:
        Game();
        void setRandomWord();
        void verify();
        std::string getWord() {return word;}
        int getTries() {return tries;}
};
#endif