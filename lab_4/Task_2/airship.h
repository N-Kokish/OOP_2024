#ifndef AIRSHIP_H
#define AIRSHIP_H
#include <string>
#include <iostream>
#include <stdexcept>
using namespace std;
class Airship {
private:
    string flightNumber;
    double maxWeight;
    int maxPassengers;

public:
    Airship(const string& flightNumber="F12", double maxWeight=1, int maxPassengers=2);

    string getFlightNumber() const;
    void setFlightNumber(const string& flightNumber);

    double getMaxWeight() const;
    void setMaxWeight(double maxWeight);

    int getMaxPassengers() const;
    void setMaxPassengers(int maxPassengers);
    virtual string getFlightInfo() const = 0;
    virtual void displaySafetyInstructions() const = 0;
};

#endif // AIRSHIP_H
