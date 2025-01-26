#include <iostream>
#include <stdexcept>
#include <string>

enum TransportationMode {
    WALKING,
    CYCLING,
    CAR,
    TRAIN
};

class DirectionService {
private:
    TransportationMode mode;

public:
    DirectionService(TransportationMode mode) : mode(mode) {}

    void setMode(TransportationMode mode) {
        this->mode = mode;
    }

    int getETA() {
        switch (mode) {
            case WALKING:
                std::cout << "Calc ETA for walking 10" << std::endl;
                return 10;
            case CYCLING:
                std::cout << "Calc ETA for cycling 5" << std::endl;
                return 5;
            case CAR:
                std::cout << "Calc ETA for car 2" << std::endl;
                return 2;
            case TRAIN:
                std::cout << "Calc ETA for train 3" << std::endl;
                return 3;
            default:
                throw std::invalid_argument("Unknown Mode");
        }
    }

    std::string getDirection() {
        switch (mode) {
            case WALKING:
                return "Directions for walking: Head north for 500 meters.";
            case CYCLING:
                return "Directions for cycling: Take the bike lane on Elm Street.";
            case CAR:
                return "Directions for driving: Use highway 50 towards downtown.";
            case TRAIN:
                return "Directions for train: Board the Red Line at Central Station.";
            default:
                return "No directions available for the selected mode.";
        }
    }
};