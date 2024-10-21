#ifndef PLAYER_H
#define PLAYER_H

#include "gameobject.h"

#include <conio.h> // Для використання _kbhit() та _getch()

class Player : public GameObject {
public:
    Player(int hp, const string& name, int x, int y);

    void update(); // Оновлення стану гравця
    void render(); // Відображення гравця
    void move(int dx, int dy); // Рух гравця

    // Обробка вводу
    void handleInput();
};
#endif // PLAYER_H
