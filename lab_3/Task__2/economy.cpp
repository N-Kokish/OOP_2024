#include "economy.h"
Economy::Economy(float gdp, float inflation, float budget)
{
    this->gdp=gdp;
    this->inflation=inflation;
    this->budget=budget;
}
void Economy::setGdp(float gdp)
{
    this->gdp=gdp;
}
float Economy::getGdp()const
{
    return gdp;
}
void Economy::setInflation(float inflation)
{
    this->inflation=inflation;
}
float Economy::getInflation()const
{
    return inflation;
}
void Economy::setBudget(float budget)
{
    this->budget=budget;
}
float Economy::getBudget()const
{
    return budget;
}
