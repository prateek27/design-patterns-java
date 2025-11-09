package org.prateek.BehaviouralPatterns.VisitorPattern;

public class TextDocument implements Document {
    private String fileName;
    private int lineCount;

    public TextDocument(String fileName, int lineCount) {
        this.fileName = fileName;
        this.lineCount = lineCount;
    }

    @Override
    public void accept(DocumentVisitor visitor) {
        visitor.visitText(this);
    }

    public String getFileName() {
        return fileName;
    }

    public int getLineCount() {
        return lineCount;
    }
}