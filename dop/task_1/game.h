#ifndef GAME_H
#define GAME_H

#include "level.h"
using namespace std;

class Game {
    Level currentLevel;
    bool isRunning;

public:
    Game();
    void run();          // Головний цикл гри
    void update();       // Оновлення гри
    void render();       // Відображення гри
};

#endif
