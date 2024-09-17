#include "country.h"
#include <iostream>

Country::Country()
{
    name="Country";
    capital="Capital";
    population=20000000;
    cout << "Конструктор за замовчуванням викликаний!" << endl;
}

Country::Country(string name, string capital, long population)
{
    this->name=name;//this (оригінальний об'єкт в який ми записуємо)
    this->capital=capital;
    this->population=population;
    cout << "Конструктор з параметрами викликаний!"<<endl;
}

Country::Country(const Country& other)
{
    name = other.name;// other (оригінальний об'єкт з якого ми копіюємо )
    capital = other.capital;
    population = other.population;
    cout << "Копіюючий конструктор викликаний!" <<endl;
}

Country::~Country()
{
    cout << "Деструктор викликаний!" << endl;
}

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

