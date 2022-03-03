#ifndef GAME_H
#define GAME_H

#include <string>


class Game {
    private:
        std::string word;
    public:
        Game();
        void setRandomWord();
        std::string getWord() {return word;}
};

#endif  