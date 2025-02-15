#ifndef NOTIFICATION_CHANNEL_CPP
#define NOTIFICATION_CHANNEL_CPP

#include <string>

class NotificationChannel {
public:
    virtual ~NotificationChannel() {}
    virtual void send(const std::string& msg) = 0;
};

#endif 