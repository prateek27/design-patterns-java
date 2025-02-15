#ifndef USER_CPP
#define USER_CPP

#include <string>
#include "Location.cpp"

class User {
protected:
    std::string name;
    std::string email;
    Location location;

public:
    User(const std::string& userName, const std::string& userEmail, const Location& loc)
        : name(userName), email(userEmail), location(loc) {}
    
    virtual ~User() {}
    
    Location getLocation() const {
        return location;
    }
    
    void setLocation(const Location& loc) {
        location = loc;
    }
    
    virtual void notify(const std::string& msg) = 0;
};

#endif 