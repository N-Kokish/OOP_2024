#include "sport_car.h"
#include <iostream>

SportCar::SportCar(): Car()
{
    maxSpeed = 200;
    horsepower = 300;
}

SportCar::SportCar(string brand, string model, Engine engine, Salon salon, float maxSpeed, int horsepower)
    : Car(brand, model, engine, salon) {//Car(brand, model, engine, salon) використовує базовий клас
    this->maxSpeed = maxSpeed;
    this->horsepower = horsepower;
}
void SportCar::setMaxSpeed(float maxSpeed) {
    this->maxSpeed = maxSpeed;
}

float SportCar::getMaxSpeed() {
    return maxSpeed;
}

void SportCar::setHorsepower(int horsepower) {
    this->horsepower = horsepower;
}

int SportCar::getHorsepower() {
    return horsepower;
}

void SportCar::displayInfo() {
    cout << "Інформація про спортивний автомобіль:" << endl;
    cout << "Марка: " << getBrand() << endl;
    cout << "Модель: " << getModel() << endl;
    cout << "Тип двигуна: " << getEngine().getType() << endl;
    cout << "Об'єм двигуна: " << getEngine().getVolume() << " см³" << endl;
    cout << "Кількість сидінь: " << getSalon().getSeats() << endl;
    cout << "Матеріал салону: " << getSalon().getMaterial() << endl;
    cout << "Максимальна швидкість: " << maxSpeed << " км/год" << endl;
    cout << "Кінська сила: " << horsepower << endl;
}
