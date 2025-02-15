package org.prateek.LLDProject.RideSharingApp.V2;

import java.util.ArrayList;
import java.util.List;

public class RideMatchingSystem {
    private List<Driver> availableDrivers = new ArrayList<>();

    public void addDriver(Driver driver){
        availableDrivers.add(driver);
    }

    public void requestRide(Passenger passenger,double distance,FareStrategy fareStrategy){
        //base case
        if(availableDrivers.isEmpty()){
            //mechanism to notify the passenger
            passenger.notify("No drivers are unavailable");
            return;
        }
        //find the nearest driver available
        Driver nearestDriver = findNearestDriver(passenger.getLocation());

        //Mediator
        availableDrivers.remove(nearestDriver);
        // passenger.notify("Ride schedule successfully" + nearestDriver);
        Ride ride = new Ride(passenger,nearestDriver,distance,fareStrategy);
        //Calc fare
        ride.calculateFare();


        passenger.notify("Ride schedued with fare + Rs"+ride.getFare());
        nearestDriver.notify("You have a new ride request for "+ride.getFare());


        //Change the Status of the Ride
        ride.updateStatus(RideStatus.ONGOING);

        //Change the status of ride after ride is finished
        ride.updateStatus(RideStatus.COMPLETED);
        availableDrivers.add(nearestDriver);
        return;
    }

    private Driver findNearestDriver(Location passengerLocation){
        Driver assignedDriver = null;
        double minDist = Double.MAX_VALUE;

        for(Driver driver:availableDrivers){
            double distance = driver.getLocation().calcDistance(passengerLocation);
            if(distance<minDist){
                minDist = distance; 
                assignedDriver = driver;
            }
        }
        return assignedDriver;
    }
}
