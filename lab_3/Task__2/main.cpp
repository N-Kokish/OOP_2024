#include <iostream>
#include <windows.h>
#include "country.h"
#include "city.h"
#include <vector>
using namespace std;
int main()
{
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    std::vector<Country> countries; // Створюємо вектор для країн
    string countryName;
    Economy economy; // GDP, інфляція, бюджет
    Country Ukraine;
    Ukraine.display();
    Economy economyUSA(80000,2.5,5800);
    Economy economyBrazil(8000, 3.5, 400);
    Country USA("Сполучені Штати Америки","Вашингтон",Population(331000000,50000),economyUSA);
    USA.display();
    // **
    countries.emplace_back("Ukraine", "Kyiv", Population(30000000, 500), economy);
    countries.emplace_back("United States of America", "Washington", Population(331000000, 50000), economyUSA);
    countries.emplace_back("Brazil", "Brasília", Population(213000000, 700), economyBrazil);
    countries.emplace_back("Canada", "Ottawa", Population(38000000, 50000), Economy(45000, 1.2, 100));//Тимчасовий об'єкт Economy ,який буде існувати поки існує countries[3]
    countries.emplace_back("Germany", "Berlin", Population(83000000, 40000), Economy(46000, 1.5, 200));
    countries.emplace_back("France", "Paris", Population(67000000, 35000), Economy(41000, 1.8, 150));
    countries.emplace_back("Japan", "Tokyo", Population(126000000, 30000), Economy(49000, 0.5, 400));
    countries.emplace_back("Australia", "Canberra", Population(25000000, 55000), Economy(45000, 1.0, 50));
    cout << "Введіть назву країни, про яку хочете отримати інформацію: ";
    getline(cin, countryName);//читає всю введену стрічку включаючи пробіли
    bool found = false;
    for (int  i = 0; i < countries.size(); ++i) {
        const Country& country = countries[i];
        if (country.getName() == countryName) {
            country.display();
            found = true;
            break;
        }
    }
    if (!found) {
        cout << "Країна з назвою \"" << countryName << "\" не знайдена." << endl;
    }
    City Kyiv("Київ","",Population( 2800000,694), 10, 839.0);
    Kyiv.display();
    return 0;
}
