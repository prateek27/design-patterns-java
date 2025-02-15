#ifndef NOTIFICATION_SERVICE_CPP
#define NOTIFICATION_SERVICE_CPP

#include <string>

class NotificationService {
public:
    virtual ~NotificationService() {}
    virtual void send(const std::string& to, const std::string& subject, const std::string& body) = 0;
};

#endif 