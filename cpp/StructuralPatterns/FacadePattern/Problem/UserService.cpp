#ifndef USER_SERVICE_CPP
#define USER_SERVICE_CPP

#include <string>

class UserService {
public:
    std::string getUserDetails(const std::string& userId) {
        // Simulate fetching user details
        return "User details for userId: " + userId;
    }
};

#endif 