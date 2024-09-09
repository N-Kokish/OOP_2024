#include <iostream>
#include "country.h"

using namespace std;

int main()
{

    Country Ukraine;
    Ukraine.setName("Ukraine") ;
    cout<<"Country name: "<< Ukraine.getName() <<endl;
    Ukraine.setCapital("Kyiv");
    cout<<"Capital: "<< Ukraine.getCapital() <<endl;
    Ukraine.setPopulation(35000000);
    cout<<"Population: "<< Ukraine.getPopulation() <<endl;

    return 0;
}
