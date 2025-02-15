#include "EmailNotificationService.cpp"
#include "SendGridAdapter.cpp"

int main() {
    // Using legacy email service
    NotificationService* emailService = new EmailNotificationService();
    emailService->send("customer@codingminutes.com", "order confirmation", "your order has been received!");

    // Using SendGrid through adapter
    SendGridService* sendGridService = new SendGridService();
    NotificationService* emailServiceUsingSendGrid = new SendGridAdapter(sendGridService);
    emailServiceUsingSendGrid->send("customer@codingminutes.com", "order confirmation", "your order has been received!");

    // Cleanup
    delete emailService;
    delete sendGridService;
    delete emailServiceUsingSendGrid;

    return 0;
} 