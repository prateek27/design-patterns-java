#ifndef SENDGRID_ADAPTER_CPP
#define SENDGRID_ADAPTER_CPP

#include "NotificationService.cpp"
#include "SendGridService.cpp"

class SendGridAdapter : public NotificationService {
private:
    SendGridService* sendGridService;

public:
    SendGridAdapter(SendGridService* service) : sendGridService(service) {}

    void send(const std::string& to, const std::string& subject, const std::string& body) override {
        // Adapter Method -> convert parameters and calls to SendGrid Method
        sendGridService->sendEmail(to, subject, body);
    }
};

#endif 