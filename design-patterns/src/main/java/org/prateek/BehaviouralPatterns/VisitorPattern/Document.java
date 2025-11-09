package org.prateek.BehaviouralPatterns.VisitorPattern;

public interface Document {
    void accept(DocumentVisitor visitor);
}