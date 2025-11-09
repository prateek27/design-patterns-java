package org.prateek.BehaviouralPatterns.VisitorPattern;

public class PDFDocument implements Document {
    private String fileName;
    private int pageCount;

    public PDFDocument(String fileName, int pageCount) {
        this.fileName = fileName;
        this.pageCount = pageCount;
    }

    @Override
    public void accept(DocumentVisitor visitor) {
        visitor.visitPDF(this);
    }

    public String getFileName() {
        return fileName;
    }

    public int getPageCount() {
        return pageCount;
    }
}