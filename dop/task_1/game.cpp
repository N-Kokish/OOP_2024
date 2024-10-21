#include "game.h"
#include <iostream>
using namespace std;

Game::Game() : isRunning(true) {
    currentLevel.loadLevel();
}

void Game::run() {
    while (isRunning) {
        update();
        render();
    }
}

void Game::update() {
    currentLevel.updateLevel();
}

void Game::render() {
    currentLevel.renderLevel();
}
