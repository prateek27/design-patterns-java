package org.prateek.BehaviouralPatterns.VisitorPattern;

public interface DocumentVisitor {
    void visitPDF(PDFDocument document);
    void visitWord(WordDocument document);
    void visitText(TextDocument document);
}