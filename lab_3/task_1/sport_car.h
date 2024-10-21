#ifndef SPORT_CAR_H
#define SPORT_CAR_H
#include "car.h"
using namespace std;
class SportCar : public Car {
private:
    float maxSpeed;
    int horsepower;     // Кінська сила
public:
    SportCar();
    SportCar(string brand, string model, Engine engine, Salon salon, float maxSpeed, int horsepower);

    void setMaxSpeed(float maxSpeed);
    float getMaxSpeed();

    void setHorsepower(int horsepower);
    int getHorsepower();
    void displayInfo();
};

#endif // SPORT_CAR_H
