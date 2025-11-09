package org.prateek.BehaviouralPatterns.ChainOfResponsibilityPattern;

public class Manager extends Handler {
    @Override
    public void handleRequest(Request request) {
        if (request.getPriority() <= 3) {
            System.out.println("Manager handling: " + request.getDescription());
        } else {
            if (nextHandler != null) {
                nextHandler.handleRequest(request);
            }
        }
    }
}