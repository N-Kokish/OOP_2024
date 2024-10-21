#include "engine.h"

Engine::Engine(){
    type="бензиновий";
    volume=870;
}

Engine::Engine(string type,float volume){
    this->type=type;
    this->volume=volume;
}

void Engine::setEngine(string type,float volume){
    this->type=type;
    this->volume=volume;
}

string Engine::getType()
{
    return type;
}

float Engine::getVolume()
{
    return volume;
}
