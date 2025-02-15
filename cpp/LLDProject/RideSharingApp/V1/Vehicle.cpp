#include <string>

class Vehicle {
public:
    std::string numberPlate;
    std::string type;

    Vehicle(const std::string& plate, const std::string& vehicleType) 
        : numberPlate(plate), type(vehicleType) {}
}; 