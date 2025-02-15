#ifndef EMAIL_NOTIFICATION_SERVICE_CPP
#define EMAIL_NOTIFICATION_SERVICE_CPP

#include <iostream>
#include "NotificationService.cpp"

class EmailNotificationService : public NotificationService {
public:
    void send(const std::string& to, const std::string& subject, const std::string& body) override {
        std::cout << "Sending Email to " << to << std::endl;
        std::cout << "Subject: " << subject << std::endl;
        std::cout << "Body: " << body << std::endl;
    }
};

#endif 