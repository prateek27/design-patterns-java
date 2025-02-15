#include <string>
#include "Location.cpp"

class Passenger {
public:
    std::string name;
    Location location;

    Passenger(const std::string& passengerName, const Location& loc)
        : name(passengerName), location(loc) {}
}; 