#include <iostream>
#include "User.cpp"
#include "Vehicle.cpp"

class Driver : public User {
private:
    Vehicle* vehicle;

public:
    Driver(const std::string& name, const std::string& email, 
           const Location& location, Vehicle* v)
        : User(name, email, location), vehicle(v) {}
    
    Vehicle* getVehicle() const {
        return vehicle;
    }
    
    std::string getName() const {
        return name;
    }
    
    void notify(const std::string& msg) override {
        std::cout << "Driver " << msg << std::endl;
    }
}; 