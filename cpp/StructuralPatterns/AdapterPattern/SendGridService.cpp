#ifndef SENDGRID_SERVICE_CPP
#define SENDGRID_SERVICE_CPP

#include <iostream>
#include <string>

class SendGridService {
public:
    void sendEmail(const std::string& recipient, const std::string& title, const std::string& content) {
        std::cout << "Sending email via SendGrid to " << recipient << std::endl;
        std::cout << "Title: " << title << std::endl;
        std::cout << "Content: " << content << std::endl;
    }
};

#endif 