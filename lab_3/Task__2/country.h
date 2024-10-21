#ifndef COUNTRY_H
#define COUNTRY_H
#include "population.h"
#include "economy.h"
#include <iostream>
using namespace std;
class Country
{
private:
    string name;
    string capital;
    Population population;
    const Economy& economy;
public:
    Country(string name_1 = "Україна", string capital_1 = "Київ", Population population = Population(),const Economy& economy = Economy());
    void setName(string name_1);
    string getName()const;
    void setCapital(string capital_1);
    string getCapital()const;
    Population getPopulation();
    void display()const;
};

#endif
