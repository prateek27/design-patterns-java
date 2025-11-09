package org.prateek.BehaviouralPatterns.ChainOfResponsibilityPattern;

public abstract class Handler {
    protected Handler nextHandler;

    public void setNext(Handler nextHandler) {
        this.nextHandler = nextHandler;
    }

    public abstract void handleRequest(Request request);
}