package org.prateek.StructuralPatterns.AdapterPattern;

public class Client {
    public static void main(String[] args) {
        NotificationService emailService = new EmailNotificationService();
        emailService.send("customer@codingminutes.com","order confirmation","your order has been recieved!");

        //NotificationService sendGridEmailService = new SendGridService();
        NotificationService emailServiceUsingSendGrid = new SendGridAdapter(new SendGridService());
        emailServiceUsingSendGrid.send("customer@codingminutes.com","order confirmation","your order has been recieved!");
    }
}
