#ifndef ECONOMY_H
#define ECONOMY_H
class Economy
{
private:
    float gdp;
    float inflation;
    float budget;
public:
    Economy(float gdp = 5660, float inflation = 30, float budget = 82.3);
    void setGdp(float gdp);
    float getGdp()const;
    void setInflation(float inflation);
    float getInflation()const;
    void setBudget(float budget);
    float getBudget()const;
};

#endif // ECONOMY_H
