#include "helicopter.h"

Helicopter::Helicopter(const string& flightNumber, double maxWeight, int maxPassengers, int rotorCount, double range)
    : Airship(flightNumber, maxWeight, maxPassengers), rotorCount(rotorCount), range(range) {
    if (rotorCount <= 0) {
        throw invalid_argument("Rotor count must be positive.");
    }
    if (range <= 0) {
        throw invalid_argument("Range must be positive.");
    }
}

int Helicopter::getRotorCount() const {
    return rotorCount;
}

void Helicopter::setRotorCount(int rotorCount) {
    if (rotorCount <= 0) {
        throw invalid_argument("Rotor count must be positive.");
    }
    this->rotorCount = rotorCount;
}

double Helicopter::getRange() const {
    return range;
}

void Helicopter::setRange(double range) {
    if (range <= 0) {
        throw invalid_argument("Range must be positive.");
    }
    this->range = range;
}
string Helicopter::getFlightInfo() const {
    return Airship::getFlightInfo() + ", Blades: " + to_string(rotorCount) + ", Range: " + to_string(range) + " km";
}
void Helicopter::displaySafetyInstructions() const {
    cout << "Helicopter Safety Instructions:\n";
    cout << "1. Remain seated with your seatbelt fastened.\n";
    cout << "2. Listen to the pilot's instructions.\n";
    cout << "3. In case of emergency, prepare for a water landing.\n";
}
