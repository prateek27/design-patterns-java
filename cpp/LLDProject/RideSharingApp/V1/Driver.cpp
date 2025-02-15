#include <string>
#include "Location.cpp"
#include "Vehicle.cpp"

class Driver {
private:
    std::string name;
    Vehicle vehicle;
    Location location;

public:
    Driver(const std::string& driverName, const Location& loc, const Vehicle& v)
        : name(driverName), location(loc), vehicle(v) {}

    Location getLocation() const {
        return location;
    }

    void setLocation(const Location& loc) {
        location = loc;
    }

    std::string getName() const {
        return name;
    }

    Vehicle getVehicle() const {
        return vehicle;
    }
}; 