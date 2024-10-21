#ifndef CAR_H
#define CAR_H
#include "engine.h"
#include "wheel.h"
using namespace std;

class Car {
private:
    Engine engine; // композиція
    Wheel wheel;   // композиція
public:
    Car(Engine engine, Wheel wheel);
    void display();
};

class CarReference {
private:
    Engine& engine; // посилання
    Wheel& wheel;   // посилання
public:
    CarReference(Engine& engine, Wheel& wheel);
    void display();
};



#endif // CAR_H
