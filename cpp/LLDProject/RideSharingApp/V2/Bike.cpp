#ifndef BIKE_CPP
#define BIKE_CPP

#include "Vehicle.cpp"

class Bike : public Vehicle {
public:
    Bike(const std::string& numberPlate) : Vehicle(numberPlate) {}
    
    double getFarePerKm() {
        return 10.0;
    }
};

#endif 