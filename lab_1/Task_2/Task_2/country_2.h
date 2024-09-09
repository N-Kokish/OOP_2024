#ifndef COUNTRY_2_H
#define COUNTRY_2_H
#include <string>
using namespace std;

struct Country_2 {
    string name;
    string capital;
    long population;
};

void setName(Country_2 &country, string name);
string getName(Country_2 &country);

void setCapital(Country_2 &country, string capital);
string getCapital(Country_2 &country);

void setPopulation(Country_2 &country, long population);
long getPopulation(Country_2 &country);
#endif
