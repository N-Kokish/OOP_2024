#ifndef AIRPLANE_H
#define AIRPLANE_H

#include "airship.h"

class Airplane : public Airship {
private:
    string model;
    int engineCount;

public:
    Airplane(const string& flightNumber, double maxWeight, int maxPassengers, const string& model="Ан-225", int engineCount=4);

    string getModel() const;
    void setModel(const string& model);

    int getEngineCount() const;
    void setEngineCount(int engineCount);
    string getFlightInfo() const override;
    void displaySafetyInstructions() const override;
};

#endif // AIRPLANE_H
