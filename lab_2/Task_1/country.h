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
    Country();

    Country(string name,string capital,long population);

    Country(const Country& other);

    ~Country() ;

    void setName(string name_1);

    string getName();

    void setCapital(string capital_1);

    string getCapital();

    void setPopulation(long population_1);

    long getPopulation() {
        return population ;
    }
};

#endif // COUNTRY_H
