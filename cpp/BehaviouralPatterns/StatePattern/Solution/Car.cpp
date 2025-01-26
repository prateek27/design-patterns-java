#include <iostream>
#include <string>
#include "TransportationMode.cpp"

class Car : public TransportationMode {
public:
    int calcETA() override {
        std::cout << "Calculating ETA (Car)" << std::endl;
        return 3;
    }

    std::string getDirection() override {
        return "Directions for driving";
    }
};