#include "car.h"
#include <iostream>
//Авто

Car::Car()
{
    brand="Запорізький автомобілебудівний завод";
    model="965";
    engine=Engine();
    salon=Salon();
}

Car::Car(string brand, string model, Engine engine, Salon salon)
{
    this->brand=brand;
    this->model=model;
    this->engine=engine;
    this->salon=salon;
}

void Car::setBrand(string brand)
{
    this->brand=brand;
}

string Car::getBrand()
{
    return brand;
}

void Car::setModel(string model)
{
    this->model=model;
}

string Car::getModel()
{
    return model;
}

void Car::setCarengine(string type,float volume)
{
    engine.setEngine(type,volume);
}

Engine Car::getEngine()
{
    return engine;
}

void Car::setCarsalon(int seats, string material)
{
    salon.setSalon(seats, material); // Викликаємо метод setSalon на об'єкті salon
}

Salon Car::getSalon()
{
    return salon;
}
