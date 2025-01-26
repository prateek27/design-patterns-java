#include <iostream>
#include <string>
#include "TransportationMode.cpp"

class Walking : public TransportationMode {
public:
    int calcETA() override {
        std::cout << "Calculating ETA (Walking)" << std::endl;
        return 10;
    }

    std::string getDirection() override {
        return "Directions for walking";
    }
};