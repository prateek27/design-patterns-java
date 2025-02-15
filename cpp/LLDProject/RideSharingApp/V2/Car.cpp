#ifndef CAR_CPP
#define CAR_CPP

#include "Vehicle.cpp"

class Car : public Vehicle {
public:
    Car(const std::string& numberPlate) : Vehicle(numberPlate) {}
    
    double getFarePerKm() {
        return 20.0;
    }
};

#endif 