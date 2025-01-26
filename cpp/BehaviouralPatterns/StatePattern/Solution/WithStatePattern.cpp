#include <iostream>
#include <string>
#include "Car.cpp"
#include "Cycling.cpp"
#include "DirectionService.cpp"

int main() {
    // Creating a DirectionService object with the initial transportation mode as Car
    DirectionService service(new Car());
    
    // service.setTransportationMode(new Cycling());
    
    // Display ETA and Direction based on the current mode
    std::cout << "ETA: " << service.getETA() << std::endl;
    std::cout << "Direction: " << service.getDirection() << std::endl;

    return 0;
}