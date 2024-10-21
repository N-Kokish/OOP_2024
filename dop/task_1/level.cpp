#include "level.h"
#include <iostream>
using namespace std;

Level::Level() : player(Player(100, "HeroTank", 5, 5)) {
    enemies.push_back(Enemy(50, "EnemyTank1", 10, 10));
    enemies.push_back(Enemy(50, "EnemyTank2", 15, 15));
}

void Level::loadLevel() {
    cout << "Level loaded\n";
    // Логіка завантаження рівня
}

void Level::updateLevel() {
    player.update();
    for (auto& enemy : enemies) {
        enemy.update();
    }
}

void Level::renderLevel() {
    player.render();
    for (auto& enemy : enemies) {
        enemy.render();
    }
}
