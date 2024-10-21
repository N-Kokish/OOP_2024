#ifndef LEVEL_H
#define LEVEL_H

#include "player.h"
#include "enemy.h"
#include <vector>
using namespace std;

class Level {
    vector<Enemy> enemies;
    Player player;

public:
    Level();
    void loadLevel();      // Завантаження рівня
    void updateLevel();    // Оновлення стану рівня
    void renderLevel();    // Відображення рівня
};

#endif
