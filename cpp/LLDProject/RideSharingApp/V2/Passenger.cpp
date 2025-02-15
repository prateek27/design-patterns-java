#include <iostream>
#include "User.cpp"

class Passenger : public User {
public:
    Passenger(const std::string& name, const std::string& email, const Location& location)
        : User(name, email, location) {}
    
    void notify(const std::string& msg) override {
        std::cout << "passenger : " << msg << std::endl;
    }
}; 