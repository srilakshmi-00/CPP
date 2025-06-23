#include <iostream>
#include <string>
#include <memory> // for std::unique_ptr
using namespace std;

// 1. Abstract base class
class Vehicle {
public:
    virtual void startEngine() = 0;
    virtual ~Vehicle() {}
};

// 2. Concrete class: Car
class Car : public Vehicle {
public:
    void startEngine() override {
        cout << "Starting car engine..." << endl;
    }
};

// 3. Concrete class: Bike
class Bike : public Vehicle {
public:
    void startEngine() override {
        cout << "Starting bike engine..." << endl;
    }
};

// 4. Factory class using unique_ptr
class VehicleFactory {
public:
    static unique_ptr<Vehicle> createVehicle(const string& type) {
        if (type == "car")
            return make_unique<Car>();
        else if (type == "bike")
            return make_unique<Bike>();
        else
            return nullptr;
    }
};

// 5. Main function
int main() {
    unique_ptr<Vehicle> vehicle1 = VehicleFactory::createVehicle("car");
    unique_ptr<Vehicle> vehicle2 = VehicleFactory::createVehicle("bike");

    if (vehicle1) vehicle1->startEngine();
    if (vehicle2) vehicle2->startEngine();

    // No need to manually delete, unique_ptr handles it
    return 0;
}
