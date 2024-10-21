#include "city.h"
City::City(string name_1, string capital_1, Population population, int districts, double area)
    : Country(name_1, capital_1, population), districts(districts), area(area) {
}

void City::setDistricts(int districts_) {
    districts = districts_;
}
int City::getDistricts() {
    return districts;
}
void City::setArea(double area_) {
    area = area_;
}
double City::getArea() {
    return area;
}
void City::display(){
    cout << "-----------------------------"<< endl;
    cout << "Назва: " << getName() << endl;
    cout << "Населення: " << getPopulation().getPopulation_() << endl;
    cout << "Зарплата: " << getPopulation().getAverage_salary()<<"$" << endl;
    cout << "Кількість районів: " << districts << endl;
    cout << "Площа: " << area << " km²" << endl;
    cout << "-----------------------------"<< endl;
}
