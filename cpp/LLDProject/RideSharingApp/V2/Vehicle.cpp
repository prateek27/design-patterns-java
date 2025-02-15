#ifndef VEHICLE_CPP
#define VEHICLE_CPP

#include <string>

class Vehicle {
protected:
    std::string numberPlate;

public:
    Vehicle(const std::string& plate) : numberPlate(plate) {}
    virtual ~Vehicle() {}
    virtual double getFarePerKm() = 0;
};

#endif 