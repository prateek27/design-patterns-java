#ifndef NOTIFICATION_SERVICE_CPP
#define NOTIFICATION_SERVICE_CPP

#include "NotificationChannel.cpp"

class NotificationService {
private:
    NotificationChannel* notificationChannel;

public:
    NotificationService(NotificationChannel* channel) : notificationChannel(channel) {}
    
    void notify(const std::string& msg) {
        notificationChannel->send(msg);
    }
};

#endif 