#include <vector>
#include <iostream>
#include <cmath>
#include "Driver.cpp"
#include "Passenger.cpp"

class RideSharingAppService {
private:
    std::vector<Driver> drivers;
    std::vector<Passenger> passengers;

    double calcDistance(const Location& one, const Location& two) {
        double dx = one.getLatitude() - two.getLatitude();
        double dy = one.getLongitude() - two.getLongitude();
        return std::sqrt(dx * dx + dy * dy);
    }

    double calcFare(const Vehicle& vehicle, double distance) {
        if (vehicle.type == "Car") {
            return distance * 20;
        }
        else if (vehicle.type == "Bike") {
            return distance * 8;
        }
        else {
            return distance * 8;
        }
    }

public:
    void addDriver(const Driver& driver) {
        drivers.push_back(driver);
    }

    void addPassenger(const Passenger& passenger) {
        passengers.push_back(passenger);
    }

    void bookRide(const Passenger& passenger, double distance) {
        if (drivers.empty()) {
            std::cout << "No drivers are available for " << passenger.name << std::endl;
            return;
        }

        Driver* assignedDriver = nullptr;
        double minDistance = std::numeric_limits<double>::max();

        for (auto& driver : drivers) {
            double currentDriverDistance = calcDistance(passenger.location, driver.getLocation());
            if (currentDriverDistance < minDistance) {
                minDistance = currentDriverDistance;
                assignedDriver = &driver;
            }
        }

        if (assignedDriver) {
            double expectedFare = calcFare(assignedDriver->getVehicle(), distance);
            std::cout << "Ride booked for " << passenger.name 
                     << " with driver " << assignedDriver->getName() 
                     << " for a fare of " << expectedFare << std::endl;
            std::cout << "Driver is on the way " << assignedDriver->getName() << std::endl;
        }
    }
}; 