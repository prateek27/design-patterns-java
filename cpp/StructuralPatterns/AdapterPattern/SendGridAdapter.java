package org.prateek.StructuralPatterns.AdapterPattern;

public class SendGridAdapter implements NotificationService{
    private SendGridService sendGridService;

    public SendGridAdapter(SendGridService sendGridService){
        this.sendGridService = sendGridService;
    }

    @Override
    public void send(String to, String subject, String body) {
        //Adapter Method -> convert parameters and calls to SendGrid Method
        sendGridService.sendEmail(to,subject,body);
    }
}
