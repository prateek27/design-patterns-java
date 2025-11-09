package org.prateek.BehaviouralPatterns.ChainOfResponsibilityPattern;

public class Supervisor extends Handler {
    @Override
    public void handleRequest(Request request) {
        if (request.getPriority() <= 2) {
            System.out.println("Supervisor handling: " + request.getDescription());
        } else {
            if (nextHandler != null) {
                nextHandler.handleRequest(request);
            }
        }
    }
}