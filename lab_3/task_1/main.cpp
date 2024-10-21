#include <iostream>
#include <windows.h>
#include "car.h"
#include "sport_car.h"
using namespace std;



int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    Car carInstance;
    cout << "Інформація про автомобіль:" << endl;
    cout << "Марка: " << carInstance.getBrand() << endl;
    cout << "Модель: " << carInstance.getModel() << endl;
    cout << "Тип двигуна: " << carInstance.getEngine().getType() << endl;
    cout << "Об'єм двигуна: " << carInstance.getEngine().getVolume() << " см³" << endl;
    cout << "Кількість сидінь: " << carInstance.getSalon().getSeats() << endl;
    cout << "Матеріал салону: " << carInstance.getSalon().getMaterial() << endl;

    Engine myEngine("дизельний", 2000);
    Salon mySalon(5, "тканина");
    Car myCar("Toyota", "Camry", myEngine, mySalon);
    cout << "Інформація про автомобіль:" << endl;
    cout << "Марка: " << myCar.getBrand() << endl;
    cout << "Модель: " << myCar.getModel() << endl;
    cout << "Тип двигуна: " << myCar.getEngine().getType() << endl;
    cout << "Об'єм двигуна: " << myCar.getEngine().getVolume() << " см³" << endl;
    cout << "Кількість сидінь: " << myCar.getSalon().getSeats() << endl;
    cout << "Матеріал салону: " << myCar.getSalon().getMaterial() << endl;
    myCar.setCarsalon(5,"Шкіряний "); // Виклик методу setSalon з параметрами
    cout << "Новий матеріал салону: " << myCar.getSalon().getMaterial() << endl;

    Engine sportEngine("бензиновий", 3000);
    Salon sportSalon(2, "алкантара");
    SportCar mySportCar("Ferrari", "488", sportEngine, sportSalon, 340, 720);

    mySportCar.displayInfo();
    return 0;
}
