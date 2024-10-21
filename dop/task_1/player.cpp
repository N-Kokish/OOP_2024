#include "player.h"
#include <iostream>
using namespace std;

#include "Player.h"
#include <iostream>
using namespace std;

Player::Player(int hp, const string& name, int x, int y)
    : GameObject(hp, name, x, y) {}

void Player::update() {
    handleInput(); // Обробка вводу
    cout << "Updating Player at (" << x << ", " << y << ") with HP: " << hp << "\n";
}

void Player::render() {
    cout << "Rendering Player at (" << x << ", " << y << ") with HP: " << hp << "\n";
}

void Player::move(int dx, int dy) {
    x += dx;
    y += dy;
}

void Player::handleInput() {
    if (_kbhit()) { // Якщо клавіша натиснута
        switch (_getch()) { // Читаємо натиснуту клавішу
        case 'w': // Вгору
            move(0, -1);
            break;
        case 's': // Вниз
            move(0, 1);
            break;
        case 'a': // Вліво
            move(-1, 0);
            break;
        case 'd': // Вправо
            move(1, 0);
            break;
        default:
            break;
        }
    }
}
