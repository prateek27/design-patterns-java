#ifndef RIDEMATCHINGSYSTEM_CPP
#define RIDEMATCHINGSYSTEM_CPP

#include <vector>
#include <limits>
#include <algorithm>
#include <sstream>
#include <iomanip>
#include "Ride.cpp"
#include <iostream>

class RideMatchingSystem {
private:
    std::vector<Driver*> availableDrivers;

    std::string formatDouble(double value) {
        std::ostringstream oss;
        oss << std::fixed << std::setprecision(1) << value;
        return oss.str();
    }

    Driver* findNearestDriver(const Location& passengerLocation) {
        Driver* assignedDriver = nullptr;
        double minDist = std::numeric_limits<double>::max();

        for(size_t i = 0; i < availableDrivers.size(); ++i) {
            Driver* driver = availableDrivers[i];
            double distance = driver->getLocation().calcDistance(passengerLocation);
            if(distance < minDist) {
                minDist = distance;
                assignedDriver = driver;
            }
        }
        return assignedDriver;
    }

public:
    void addDriver(Driver* driver) {
        availableDrivers.push_back(driver);
    }

    void requestRide(Passenger* passenger, double distance, FareStrategy* fareStrategy) {
        if(availableDrivers.empty()) {
            passenger->notify("No drivers are unavailable");
            return;
        }

        Driver* nearestDriver = findNearestDriver(passenger->getLocation());
        
        // Remove driver from available pool
        availableDrivers.erase(
            std::remove(availableDrivers.begin(), availableDrivers.end(), nearestDriver),
            availableDrivers.end()
        );

        Ride ride(passenger, nearestDriver, distance, fareStrategy);
        ride.calculateFare();

        passenger->notify("Ride schedued with fare + Rs" + formatDouble(ride.getFare()));
        nearestDriver->notify("You have a new ride request for " + formatDouble(ride.getFare()));

        ride.updateStatus(ONGOING);
        ride.updateStatus(COMPLETED);
        
        availableDrivers.push_back(nearestDriver);
    }
};

#endif 