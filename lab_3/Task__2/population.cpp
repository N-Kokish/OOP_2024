#include "population.h"
Population::Population(long population_, float average_salary)
{
    this->population_ = population_;
    this->average_salary = average_salary;
}
void Population::setPopulation(long population_)
{
    this->population_ = population_;
}
long Population::getPopulation_() const
{
    return population_;
}
float Population::getAverage_salary() const
{
    return average_salary;
}
void Population::setAverage_salary(float average_salary)
{
    this->average_salary = average_salary;
}
