#include "salon.h"

Salon::Salon()
{
    seats=4;
    material="шкіряний";
}

Salon::Salon(int seats, string material)
{
    this->seats=seats;
    this->material=material;
}

void Salon::setSalon(int seats, string material)
{
    this->seats=seats;
    this->material=material;
}

int Salon::getSeats()
{
    return seats;
}

string Salon::getMaterial()
{
    return material;
}
