#include "enemy.h"
#include <iostream>
using namespace std;

Enemy::Enemy(int hp, const string& name, int x, int y)
    : GameObject(hp, name, x, y) {}

void Enemy::update() {
    cout << "Updating Enemy at (" << x << ", " << y << ") with HP: " << hp << "\n";
    // Логіка руху ворога
}

void Enemy::render() {
    cout << "Rendering Enemy at (" << x << ", " << y << ") with HP: " << hp << "\n";
}

void Enemy::shoot() {
    cout << "Enemy shooting\n";
    // Логіка стрільби ворога
}
