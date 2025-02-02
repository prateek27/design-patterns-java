#include <iostream>
#include "TransportFactory.cpp"

using namespace std;

int main() {
    // Direct create objects using TransportFactory
    Transport* vehicle = TransportFactory::createTransport("car");
    vehicle->deliver();

    // Cleanup (if dynamic allocation is used)
    delete vehicle;

    return 0;
}
