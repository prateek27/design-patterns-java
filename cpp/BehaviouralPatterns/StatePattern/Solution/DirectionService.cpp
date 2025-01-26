#include <iostream>
#include <string>
#include "TransportationMode.cpp"

class DirectionService {
private:
    TransportationMode* transportationMode;

public:
    DirectionService(TransportationMode* transportationMode) {
        this->transportationMode = transportationMode;
    }

    void setTransportationMode(TransportationMode* mode) {
        this->transportationMode = mode;
    }

    int getETA() {
        return transportationMode->calcETA();
    }

    std::string getDirection() {
        return transportationMode->getDirection();
    }
};