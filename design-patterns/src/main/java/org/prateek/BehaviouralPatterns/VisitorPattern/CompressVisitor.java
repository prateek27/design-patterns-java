package org.prateek.BehaviouralPatterns.VisitorPattern;

public class CompressVisitor implements DocumentVisitor {

    @Override
    public void visitPDF(PDFDocument document) {
        System.out.println("Compressing PDF: " + document.getFileName());
    }

    @Override
    public void visitWord(WordDocument document) {
        System.out.println("Compressing Word: " + document.getFileName());
    }

    @Override
    public void visitText(TextDocument document) {
        System.out.println("Compressing Text: " + document.getFileName());
    }
}