#include <string>
#include <stdexcept>
#include <algorithm>
#include "Car.cpp"
#include "Bike.cpp"
#include "Bus.cpp"

// Forward declarations of classes defined elsewhere.
class Transport;
class Car;
class Bike;
class Bus;

class TransportFactory {
public:
    static Transport* createTransport(std::string type) {
        // Convert the input string to lowercase.
        std::transform(type.begin(), type.end(), type.begin(), ::tolower);
        
        if (type == "car") {
            return new Car();
        } else if (type == "bike") {
            return new Bike();
        } else if (type == "bus") {
            return new Bus();
        } else {
            throw std::invalid_argument("Unsupported transport type");
        }
    }
};
