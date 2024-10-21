#ifndef ENEMY_H
#define ENEMY_H

#include "gameobject.h"

class Enemy : public GameObject {
public:
    Enemy(int hp, const string& name, int x, int y);
    void update();    // Оновлення стану ворога
    void render();    // Відображення ворога
    void shoot();     // Стрільба ворога
};

#endif
