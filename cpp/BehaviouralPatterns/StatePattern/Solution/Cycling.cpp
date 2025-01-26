#include <iostream>
#include <string>
#include "TransportationMode.cpp"

class Cycling : public TransportationMode {
public:
    int calcETA() override {
        std::cout << "Calculating ETA (Cycling)" << std::endl;
        return 5;
    }

    std::string getDirection() override {
        return "Directions for cycling";
    }
};