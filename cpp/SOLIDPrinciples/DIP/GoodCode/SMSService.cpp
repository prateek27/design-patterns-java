#ifndef SMS_SERVICE_CPP
#define SMS_SERVICE_CPP

#include <iostream>
#include "NotificationChannel.cpp"

class SMSService : public NotificationChannel {
public:
    void send(const std::string& msg) override {
        std::cout << "Sending SMS " << msg << std::endl;
    }
};

#endif 