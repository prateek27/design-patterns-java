#include "NotificationService.cpp"
#include "EmailService.cpp"
#include "SMSService.cpp"

int main() {
    NotificationChannel* emailChannel = new EmailService();
    NotificationService emailNotification(emailChannel);
    emailNotification.notify("Your order has been shipped");

    NotificationChannel* smsChannel = new SMSService();
    NotificationService smsNotification(smsChannel);
    smsNotification.notify("OTP 1234");

    delete emailChannel;
    delete smsChannel;

    return 0;
} 