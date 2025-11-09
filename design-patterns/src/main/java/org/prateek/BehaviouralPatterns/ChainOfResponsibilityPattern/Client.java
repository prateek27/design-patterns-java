package org.prateek.BehaviouralPatterns.ChainOfResponsibilityPattern;

public class Client {
    public static void main(String[] args) {
        Handler supportAgent = new SupportAgent();
        Handler supervisor = new Supervisor();
        Handler manager = new Manager();
        Handler director = new Director();

        supportAgent.setNext(supervisor);
        supervisor.setNext(manager);
        manager.setNext(director);

        Request technicalRequest = new Request("Technical", "Cannot login to account", 1);
        Request billingRequest = new Request("Billing", "Invoice discrepancy", 2);
        Request refundRequest = new Request("Refund", "Request for full refund", 4);

        System.out.println("Processing Technical Request");
        supportAgent.handleRequest(technicalRequest);
        System.out.println();

        System.out.println("Processing Billing Request");
        supportAgent.handleRequest(billingRequest);
        System.out.println();

        System.out.println("Processing Refund Request");
        supportAgent.handleRequest(refundRequest);
    }
}