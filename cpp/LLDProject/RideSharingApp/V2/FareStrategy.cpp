#ifndef FARESTRATEGY_CPP
#define FARESTRATEGY_CPP

#include "Vehicle.cpp"

class FareStrategy {
public:
    virtual ~FareStrategy() {}
    virtual double calcFare(Vehicle* vehicle, double distance) = 0;
};

class StandardFareStrategy : public FareStrategy {
public:
    double calcFare(Vehicle* vehicle, double distance) {
        return vehicle->getFarePerKm() * distance;
    }
};

class SharedFareStrategy : public FareStrategy {
public:
    double calcFare(Vehicle* vehicle, double distance) {
        return vehicle->getFarePerKm() * distance * 0.50;
    }
};

class LuxuryStrategy : public FareStrategy {
public:
    double calcFare(Vehicle* vehicle, double distance) {
        return vehicle->getFarePerKm() * distance * 1.5;
    }
};

#endif 