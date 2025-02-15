#include "RideSharingAppService.cpp"

int main() {
    Location loc1(12.9716, 77.5946);  // Bangalore
    Location loc2(12.9352, 77.6245);  // Near Bangalore
    Location loc3(13.0352, 77.6175);  // Another place near Bangalore

    // Create Vehicles
    Vehicle car("AB123CD", "Car");
    Vehicle bike("XY987Z", "Bike");

    // Create Drivers
    Driver driver1("Alice", loc2, car);
    Driver driver2("Bob", loc3, bike);

    // Create Passengers
    Passenger passenger1("John", loc1);
    Passenger passenger2("Rahul", loc3);

    // Ride Sharing App
    RideSharingAppService app;
    app.addDriver(driver1);
    app.addDriver(driver2);
    app.addPassenger(passenger1);
    app.addPassenger(passenger2);

    // Book the Ride
    app.bookRide(passenger1, 10);
    app.bookRide(passenger2, 20);
    app.bookRide(passenger2, 20);

    return 0;
} 