#ifndef SALON_H
#define SALON_H
#include <string>
using namespace std;

class Salon{
private:
    int seats;
    string material;
public:
    Salon();
    Salon(int seats,string material);
    void setSalon(int seats,string material);
    int getSeats();
    string getMaterial();
};

#endif // SALON_H
