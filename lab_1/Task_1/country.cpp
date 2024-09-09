 #include "country.h"


void Country::setName(string name_1) {
    name = name_1;
}

string Country::getName() {
    return name;
}

void Country::setCapital(string capital_1) {
    capital = capital_1;
}

string Country::getCapital() {
    return capital;
}

void Country::setPopulation(long population_1) {
    population = population_1;
}

long Country::getPopulation() {
    return population;
}
