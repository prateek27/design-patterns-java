#ifndef NOTIFICATION_SERVICE_CPP
#define NOTIFICATION_SERVICE_CPP

#include "EmailService.cpp"
#include "SMSService.cpp"

class NotificationService {
private:
    EmailService emailService;
    SMSService smsService;

public:
    void notifyByEmail(const std::string& msg) {
        emailService.sendEmail(msg);
    }
    
    void notifyBySMS(const std::string& msg) {
        smsService.sendSMS(msg);
    }
};

#endif 