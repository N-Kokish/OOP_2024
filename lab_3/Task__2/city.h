#ifndef CITY_H
#define CITY_H
#include "country.h"
#include <iostream>
using namespace std;
class City : public Country
{
private:
    int districts;  // Кількість районів
    double area;
public:
    City(string name_1 = "Київ", string capital_1 = "", Population population = Population(), int districts = 10, double area = 839.0);
    void setDistricts(int districts_);
    int getDistricts();
    void setArea(double area_);
    double getArea();
    void display();
};

#endif
