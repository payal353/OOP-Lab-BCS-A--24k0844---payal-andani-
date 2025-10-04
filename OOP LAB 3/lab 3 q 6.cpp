#include <iostream>
using namespace std;
class Vehicle {
public:
    string make;
    string model;

    void displayInfo() {
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
    }
};

class Car : public Vehicle {
public:
    string engineType;

    // Method to display car info (extends Vehicle::displayInfo)
    void displayInfo() {
        Vehicle::displayInfo();
        cout << "Engine Type: " << engineType << endl;
    }
};

int main() {
    Car Car1;

    Car1.make = "KIA";
    Car1.model = "swift";
    Car1.engineType = "Hybrid";
    Car1.displayInfo();

    return 0;
}
