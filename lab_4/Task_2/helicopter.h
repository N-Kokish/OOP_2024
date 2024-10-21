#ifndef HELICOPTER_H
#define HELICOPTER_H

#include "airship.h"

    class Helicopter : public Airship {
private:
    int rotorCount;
    double range;

public:
    Helicopter(const string& flightNumber, double maxWeight, int maxPassengers, int rotorCount=4, double range=25);

    int getRotorCount() const;
    void setRotorCount(int rotorCount);

    double getRange() const;
    void setRange(double range);
    string getFlightInfo() const override;
    void displaySafetyInstructions() const override;
};

#endif // HELICOPTER_H
