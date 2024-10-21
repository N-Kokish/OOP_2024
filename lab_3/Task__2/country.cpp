#include "country.h"
Country::Country(string name_1, string capital_1, Population population, const Economy& economy)
    : name(name_1), capital(capital_1), population(population), economy(economy) // список ініціалізації,пряме ініціалізування ,ініціалізація const та посилань
{
}
void Country::setName(string name_1) {
    name = name_1;
}
string Country::getName()const {
    return name;
}
void Country::setCapital(string capital_1) {
    capital = capital_1;
}
string Country::getCapital()const {
    return capital;
}
Population Country::getPopulation()
{
    return population;
}
void Country::display()const
{
    cout << "Назва країни: " << getName() << ", Столиця: " << getCapital() << endl;
    cout << "Населення: " << population.getPopulation_() << ", Середня зарплата: " << population.getAverage_salary()<< "$" << endl;
    cout << "ВВП на душу населення : " << economy.getGdp() << "$, Інфляція: " << economy.getInflation() << "%, Бюджет: " << economy.getBudget()<< " млрд $" << endl;
    cout <<"======================================================"<<endl;
}
