package org.prateek.BehaviouralPatterns.ChainOfResponsibilityPattern;

public class SupportAgent extends Handler {
    @Override
    public void handleRequest(Request request) {
        if (request.getPriority() <= 1) {
            System.out.println("Support Agent handling: " + request.getDescription());
        } else {
            if (nextHandler != null) {
                nextHandler.handleRequest(request);
            }
        }
    }
}