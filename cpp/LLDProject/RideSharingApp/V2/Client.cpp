#include "Car.cpp"
#include "Bike.cpp"
#include "RideMatchingSystem.cpp"

int main() {
    Location loc1(12.9716, 77.5946);
    Location loc2(12.9352, 77.6245);
    Location loc3(13.0352, 77.6175);
    
    auto* car = new Car("AB123CD");
    auto* bike = new Bike("XY987Z");

    auto* driver1 = new Driver("Alice", "alice@rideshare.com", loc2, car);
    auto* driver2 = new Driver("Bob", "bob@rideshare.com", loc3, bike);

    auto* passenger1 = new Passenger("John", "john@rideshare.com", loc1);

    RideMatchingSystem rideMatchingSystem;
    rideMatchingSystem.addDriver(driver2);
    rideMatchingSystem.addDriver(driver1);

    auto* fareStrategy = new StandardFareStrategy();
    rideMatchingSystem.requestRide(passenger1, 10, fareStrategy);

    // Cleanup
    delete car;
    delete bike;
    delete driver1;
    delete driver2;
    delete passenger1;
    delete fareStrategy;

    return 0;
} 