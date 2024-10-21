#include "car.h"
#include <iostream>
using namespace std;

// Car
Car::Car(Engine engine, Wheel wheel) {
    this->engine = engine;
    this->wheel = wheel;
}

void Car::display() {
    cout << "Двигун: " << engine.getType() << ", Об'єм: " << engine.getVolume() << " см³" << endl;
    cout << "Розмір колеса: " << wheel.getSize() << " дюймів" << endl;
}

// CarReference
CarReference::CarReference(Engine& engine, Wheel& wheel) : engine(engine), wheel(wheel) {}//такий запис необхідний для уникнення дворазовій ініціалізації

void CarReference::display() {
    cout << "Двигун Reference: " << engine.getType() << ", Об'єм: " << engine.getVolume() << " см³" << endl;
    cout << "Розмір колеса: " << wheel.getSize() << " дюймів" << endl;
}

