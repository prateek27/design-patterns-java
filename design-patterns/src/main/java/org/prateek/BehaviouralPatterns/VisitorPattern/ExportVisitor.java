package org.prateek.BehaviouralPatterns.VisitorPattern;

public class ExportVisitor implements DocumentVisitor {

    @Override
    public void visitPDF(PDFDocument document) {
        System.out.println("Exporting PDF: " + document.getFileName());
    }

    @Override
    public void visitWord(WordDocument document) {
        System.out.println("Exporting Word: " + document.getFileName());
    }

    @Override
    public void visitText(TextDocument document) {
        System.out.println("Exporting Text: " + document.getFileName());
    }
}