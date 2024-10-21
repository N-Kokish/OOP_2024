#ifndef CAR_H
#define CAR_H
#include <string>
#include "engine.h"
#include "salon.h"

using namespace std;

class Car {
private:
    string brand;
    string model;
    Engine engine;
    Salon salon;
public:
    Car();
    Car(string brand, string model, Engine engine, Salon salon);

    void setBrand(string brand);
    string getBrand();

    void setModel(string model);
    string getModel();

    void setCarengine(string type,float volume);
    Engine getEngine();

    void setCarsalon(int seats, string material);
    Salon getSalon();

};

#endif // CAR_H
