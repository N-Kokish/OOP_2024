#include "gameobject.h"

GameObject::GameObject(int hp, const string& name, int x, int y)
    : hp(hp), name(name), x(x), y(y) {}

int GameObject::getHP() const {
    return hp;
}

void GameObject::setHP(int hp) {
    this->hp = hp;
}

string GameObject::getName() const {
    return name;
}

void GameObject::setName(const string& name) {
    this->name = name;
}

int GameObject::getX() const {
    return x;
}

int GameObject::getY() const {
    return y;
}

void GameObject::setPosition(int x, int y) {
    this->x = x;
    this->y = y;
}

void GameObject::move(int dx, int dy) {
    x += dx;
    y += dy;
}
