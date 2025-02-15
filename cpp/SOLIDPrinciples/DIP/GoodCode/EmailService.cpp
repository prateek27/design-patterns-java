#ifndef EMAIL_SERVICE_CPP
#define EMAIL_SERVICE_CPP

#include <iostream>
#include "NotificationChannel.cpp"

class EmailService : public NotificationChannel {
public:
    void send(const std::string& msg) override {
        std::cout << "Sending Email " << msg << std::endl;
    }
};

#endif 