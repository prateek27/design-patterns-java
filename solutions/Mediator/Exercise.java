package Mediator;

import java.util.Scanner;

public class Exercise {

    public void run() {
        
        Scanner sc = new Scanner(System.in);
        
        // Create the control tower (mediator)
        ControlTower controlTower = new ControlTower();
        
        String airplaneId1 = sc.nextLine();
        String airplaneId2 = sc.nextLine();
        String airplaneId3 = sc.nextLine();
        String airplaneId4 = sc.nextLine();

        // Create airplanes with user input
        Airplane airplane1 = new Airplane(airplaneId1);
        Airplane airplane2 = new Airplane(airplaneId2);
        Airplane airplane3 = new Airplane(airplaneId3);
        Airplane airplane4 = new Airplane(airplaneId4);

        // Register airplanes with the control tower
        controlTower.registerAirplane(airplane1);
        controlTower.registerAirplane(airplane2);
        controlTower.registerAirplane(airplane3);
        controlTower.registerAirplane(airplane4);

        // Airplanes request takeoff and landing
        airplane1.requestTakeoff();
        airplane2.requestTakeoff();
        airplane3.requestTakeoff();
        airplane4.requestTakeoff();
        
        // Manually simulate completion of the next requests
        airplane1.completeTakeoff();
        airplane2.completeTakeoff();

        airplane3.requestTakeoff();
        airplane4.requestTakeoff();
        
        // Manually simulate completion of the next requests
        airplane3.completeTakeoff();
        airplane4.completeTakeoff();

        // Additional requests to demonstrate functionality
        airplane1.requestLanding();
        airplane2.requestLanding();
        
        // Manually simulate completion of the next requests
        airplane1.completeLanding();
        airplane2.completeLanding();
        
        airplane3.requestLanding();
        airplane4.requestLanding();
        
        // Manually simulate completion of the next requests
        airplane3.completeLanding();
        airplane4.completeLanding();

        sc.close();
    }
}