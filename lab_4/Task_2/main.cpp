#include <iostream>
#include <windows.h>
#include "airship.h"
#include "airplane.h"
#include "helicopter.h"
using namespace std;

int main() {
    SetConsoleCP(CP_UTF8);
    SetConsoleOutputCP(CP_UTF8);
    string flightNumber, model;
    int engineCount;
    try {
        Airplane airplane("A123", 10000, 150, "Boeing 747", 4);
        Helicopter helicopter("H456", 5000, 6, 2, 300);

        cout << airplane.getFlightInfo() << endl;
        cout << helicopter.getFlightInfo() << endl;
        cout <<"=============="<<endl;
        airplane.displaySafetyInstructions();
        cout <<"=============="<<endl;
        helicopter.displaySafetyInstructions();
    }
    catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    catch (...) {
        cout << "An unexpected error occurred." << endl;
    }



    cout << "Enter flight number: ";
    getline(cin, flightNumber);
    cout << "Enter model: ";
    getline(cin, model);
    cout << "Enter number of engines: ";
    cin >> engineCount;
    try {
        Airplane airplane(flightNumber, 10000, 180, model, engineCount);
        cout << airplane.getFlightInfo() << endl;

    } catch (const invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    } catch (...) {
        cout << "An unexpected error occurred." << endl;
    }

    return 0;
}
