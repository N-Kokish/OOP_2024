#include "country_2.h"


void setName(Country_2 &country, string name) {
    country.name = name;
}

string getName(Country_2 &country) {
    return country.name;
}

void setCapital(Country_2 &country, string capital) {
    country.capital = capital;
}

string getCapital(Country_2 &country) {
    return country.capital;
}

void setPopulation(Country_2 &country, long population) {
    country.population = population;
}

long getPopulation(Country_2 &country) {
    return country.population;
}
