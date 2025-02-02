#include <iostream>
#include "Car.cpp"
#include "Bike.cpp"
#include "Bus.cpp"
#include "Transport.cpp"

using namespace std;

int main() {
    // Direct create objects
    Transport* car = new Car();
    Transport* bike = new Bike();
    // add a bus object
    Transport* bus = new Bus();

    // Cleanup (if dynamic allocation is used)
    delete car;
    delete bike;
    delete bus;
    
    return 0;
}
