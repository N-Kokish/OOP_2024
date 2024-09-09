#include <iostream>
#include "country_2.h"

using namespace std;

int main() {
    Country_2 Ukraine;

    setName(Ukraine , "Ukraine");
    cout << "Country name: " << getName(Ukraine) << endl;

    setCapital(Ukraine, "Kyiv");
    cout << "Capital: " << getCapital(Ukraine) << endl;

    setPopulation(Ukraine, 35000000);
    cout << "Population: " << getPopulation(Ukraine) << endl;

    return 0;
}
