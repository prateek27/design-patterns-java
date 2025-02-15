#ifndef SMS_SERVICE_CPP
#define SMS_SERVICE_CPP

#include <iostream>
#include <string>

class SMSService {
public:
    void sendSMS(const std::string& message) {
        std::cout << "Sending SMS: " << message << std::endl;
    }
};

#endif 