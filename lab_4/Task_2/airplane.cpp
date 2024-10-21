#include "airplane.h"

Airplane::Airplane(const string& flightNumber, double maxWeight, int maxPassengers, const string& model, int engineCount)
    : Airship(flightNumber, maxWeight, maxPassengers), model(model), engineCount(engineCount) {
    if (model.empty()) {
        throw invalid_argument("Model cannot be empty.");
    }
    if (engineCount <= 0) {
        throw invalid_argument("Engine count must be positive.");
    }
}

string Airplane::getModel() const {
    return model;
}

void Airplane::setModel(const string& model) {
    if (model.empty()) {
        throw invalid_argument("Model cannot be empty.");
    }
    this->model = model;
}

int Airplane::getEngineCount() const {
    return engineCount;
}

void Airplane::setEngineCount(int engineCount) {
    if (engineCount <= 0) {
        throw invalid_argument("Engine count must be positive.");
    }
    this->engineCount = engineCount;
}
string Airplane::getFlightInfo() const {
    return Airship::getFlightInfo() + ", Model: " + model + ", Engines: " + to_string(engineCount);
}
void Airplane::displaySafetyInstructions() const {
    cout << "Airplane Safety Instructions:\n";
    cout << "1. Fasten your seatbelt.\n";
    cout << "2. Follow the crew's instructions.\n";
    cout << "3. In case of emergency, use the nearest exit.\n";
}
