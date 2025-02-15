#ifndef EMAIL_SERVICE_CPP
#define EMAIL_SERVICE_CPP

#include <iostream>
#include <string>

class EmailService {
public:
    void sendEmail(const std::string& message) {
        std::cout << "Sending email: " << message << std::endl;
    }
};

#endif 