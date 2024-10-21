#include <iostream>
#include <windows.h>
#include "engine.h"
#include "wheel.h"
#include "car.h"
#include "sport_car.h"
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);

    Engine myEngine("дизельний", 2000);
    Wheel myWheel(18);
    Engine myEngine_2("газовий", 2500);
    Wheel myWheel_2(19);
    Engine myEngine_3("Бензиновий", 3000);
    Wheel myWheel_3(20);
    Car myCar(myEngine, myWheel);
    myCar.display();

    CarReference myCarRef(myEngine_2, myWheel_2);
    myCarRef.display();

    SportCar mySportCar(myEngine_3, myWheel_3, 250);
    mySportCar.display();

    return 0;
}
