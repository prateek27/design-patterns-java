#ifndef RIDE_CPP
#define RIDE_CPP

#include "Driver.cpp"
#include "Passenger.cpp"
#include "FareStrategy.cpp"

enum RideStatus {
    SCHEDULED,
    ONGOING,
    COMPLETED
};

class Ride {
private:
    Passenger* passenger;
    Driver* driver;
    double distance;
    FareStrategy* fareStrategy;
    double fare;
    RideStatus status;

    void notifyUsers(RideStatus status) {
        std::string statusStr;
        switch(status) {
            case SCHEDULED: statusStr = "SCHEDULED"; break;
            case ONGOING: statusStr = "ONGOING"; break;
            case COMPLETED: statusStr = "COMPLETED"; break;
        }
        passenger->notify("Your ride is " + statusStr);
        driver->notify("Ride Status : " + statusStr);
    }

public:
    Ride(Passenger* p, Driver* d, double dist, FareStrategy* strategy)
        : passenger(p), driver(d), distance(dist), 
          fareStrategy(strategy), fare(0), status(SCHEDULED) {}

    void calculateFare() {
        fare = fareStrategy->calcFare(driver->getVehicle(), distance);
    }

    void updateStatus(RideStatus newStatus) {
        status = newStatus;
        notifyUsers(status);
    }

    double getFare() const {
        return fare;
    }
};

#endif 