#include "engine.h"

Engine::Engine(string type, float volume) {
    this->type = type;
    this->volume = volume;
}

string Engine::getType() {
    return type;
}

float Engine::getVolume() {
    return volume;
}
