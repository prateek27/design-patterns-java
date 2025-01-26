#include <iostream>
#include "DirectionService.cpp"

int main() {
    DirectionService directionService(TRAIN);
    directionService.setMode(CAR);

    std::cout << directionService.getDirection() << std::endl;
    directionService.getETA();

    return 0;
}