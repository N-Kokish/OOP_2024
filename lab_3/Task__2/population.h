#ifndef POPULATION_H
#define POPULATION_H
#include <string>
using namespace std;
class Population
{
private:
    long population_;
    float average_salary;
public:
    Population(long population_=3000000, float average_salary=540);
    void setPopulation(long population_1);
    long getPopulation_()const;
    float getAverage_salary()const;
    void setAverage_salary(float average_salary);
};

#endif // POPULATION_H
