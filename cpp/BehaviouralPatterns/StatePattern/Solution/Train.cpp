#include <iostream>
#include <string>
#include "TransportationMode.cpp"

class Train : public TransportationMode {
public:
    int calcETA() override {
        std::cout << "Calculating ETA (Train)" << std::endl;
        return 7;
    }

    std::string getDirection() override {
        return "Directions for train route";
    }
};