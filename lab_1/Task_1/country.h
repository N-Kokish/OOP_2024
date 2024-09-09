#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
using namespace std;

class Country
{
private:
    string name;
    string capital;
    long population;

public:
    void setName(string name_1);
    string getName();
    void setCapital(string capital_1);
    string getCapital();
    void setPopulation(long population_1);
    long getPopulation();
};

#endif
