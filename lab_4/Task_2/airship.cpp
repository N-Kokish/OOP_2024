#include "airship.h"

Airship::Airship(const string& flightNumber, double maxWeight, int maxPassengers)
    : flightNumber(flightNumber), maxWeight(maxWeight), maxPassengers(maxPassengers) {
    if (flightNumber.empty()) {
        throw invalid_argument("Flight number cannot be empty.");
    }
    if (maxWeight <= 0) {
        throw invalid_argument("Max weight must be positive.");
    }
    if (maxPassengers <= 0) {
        throw invalid_argument("Max passengers must be positive.");
    }
}

string Airship::getFlightNumber() const {
    return flightNumber;
}

void Airship::setFlightNumber(const string& flightNumber) {
    if (flightNumber.empty()) {
        throw std::invalid_argument("Flight number cannot be empty.");
    }
    this->flightNumber = flightNumber;
}

double Airship::getMaxWeight() const {
    return maxWeight;
}

void Airship::setMaxWeight(double maxWeight) {
    if (maxWeight <= 0) {
        throw invalid_argument("Max weight must be positive.");
    }
    this->maxWeight = maxWeight;
}

int Airship::getMaxPassengers() const {
    return maxPassengers;
}

void Airship::setMaxPassengers(int maxPassengers) {
    if (maxPassengers <= 0) {
        throw invalid_argument("Max passengers must be positive.");
    }
    this->maxPassengers = maxPassengers;
}
string Airship::getFlightInfo() const {
    return "Airship: Flight " + flightNumber + ", Max Weight: " + to_string(maxWeight) + " kg, Max Passengers: " + to_string(maxPassengers);
}
