#include <iostream>


/*
Enumeration (enum)
Allows us to use values instead of numbers, for example difficulty could be represented with 0, 1, 2. OR easy, normal, hard
*/

enum Difficulty {Easy, Normal, Hard};

class GameConfig{
public:

    GameConfig() : playerDifficulty(defaultDifficulty) {}

    static int getDefaultDifficulty(){
        return defaultDifficulty;
    }

    int getPlayerDifficulty(){
        return playerDifficulty;
    }

    static void setDefaultDifficulty(int level){
        if (level >= Easy && level <= Hard){
            defaultDifficulty = level;
        }
    }

static std::string difficultyToString(int level){
    switch(level){
        case 0: return "Easy";
        case 1: return "Normal";
        case 2: return "Hard";
        default: return "Unknown";
    }
}

private:
static int defaultDifficulty;
int playerDifficulty;

};

// In order to work with static properties, you must intialize static members
int GameConfig::defaultDifficulty = Hard;


int main(){
    Difficulty d = Hard;
    std::cout << d << std::endl;
    GameConfig::setDefaultDifficulty(Hard);
    std::cout << "Default difficulty is " << GameConfig::difficultyToString(GameConfig::getDefaultDifficulty()) << std::endl;


    GameConfig player;
    std::cout << GameConfig::difficultyToString(player.getPlayerDifficulty()) << std::endl;
    return 0;
}