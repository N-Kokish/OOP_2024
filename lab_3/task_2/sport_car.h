#ifndef SPORTCAR_H
#define SPORTCAR_H

#include "car.h"

class SportCar : public Car {
private:
    int maxSpeed;
public:
    SportCar(Engine engine, Wheel wheel, int maxSpeed);
    void display();
};

#endif // SPORTCAR_H
