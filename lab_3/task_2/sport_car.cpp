#include "sport_car.h"
#include <iostream>
using namespace std;

// Конструктор
SportCar::SportCar(Engine engine, Wheel wheel, int maxSpeed)
    : Car(engine, wheel) // Виклик конструктора базового класу
{
    this->maxSpeed = maxSpeed;
}


void SportCar::display() {
    Car::display();
    cout << "Максимальна швидкість: " << maxSpeed << " км/год" << endl;
}
