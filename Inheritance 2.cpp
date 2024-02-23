#include <iostream>
#include <string>
using namespace std;

class Vehicle {
protected:
    string make;
    string model;
    int year;
public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}

    string getMake() const { return make; }
    string getModel() const { return model; }
    int getYear() const { return year; }

    void setMake(string mk) { make = mk; }
    void setModel(string mdl) { model = mdl; }
    void setYear(int yr) { year = yr; }
};

class Car : public Vehicle {
private:
    int seatingCapacity;
    string fuelType;
public:
    Car(string mk, string mdl, int yr, int seats, string fuel) : Vehicle(mk, mdl, yr), seatingCapacity(seats), fuelType(fuel) {}

    int getSeatingCapacity() const { return seatingCapacity; }
    string getFuelType() const { return fuelType; }

    void setSeatingCapacity(int seats) { seatingCapacity = seats; }
    void setFuelType(string fuel) { fuelType = fuel; }
};

class Truck : public Vehicle {
private:
    double payloadCapacity;
    double towingCapacity;
public:
    Truck(string mk, string mdl, int yr, double payload, double towing) : Vehicle(mk, mdl, yr), payloadCapacity(payload), towingCapacity(towing) {}

    double getPayloadCapacity() const { return payloadCapacity; }
    double getTowingCapacity() const { return towingCapacity; }

    void setPayloadCapacity(double payload) { payloadCapacity = payload; }
    void setTowingCapacity(double towing) { towingCapacity = towing; }
};

int main() {
    Car myCar("Toyota", "Camry", 2022, 5, "Gasoline");
    Truck myTruck("Ford", "F150", 2023, 1500.0, 10000.0);

    cout << "Car Make: " << myCar.getMake() << ", Model: " << myCar.getModel() << ", Year: " << myCar.getYear() << endl;
    cout << "Seating Capacity: " << myCar.getSeatingCapacity() << ", Fuel Type: " << myCar.getFuelType() << endl;

    cout << "\nTruck Make: " << myTruck.getMake() << ", Model: " << myTruck.getModel() << ", Year: " << myTruck.getYear() << endl;
    cout << "Payload Capacity: " << myTruck.getPayloadCapacity() << " lbs, Towing Capacity: " << myTruck.getTowingCapacity() << " lbs" << endl;

    return 0;
}

