package org.prateek.BehaviouralPatterns.VisitorPattern;

public class WordDocument implements Document {
    private String fileName;
    private String author;

    public WordDocument(String fileName, String author) {
        this.fileName = fileName;
        this.author = author;
    }

    @Override
    public void accept(DocumentVisitor visitor) {
        visitor.visitWord(this);
    }

    public String getFileName() {
        return fileName;
    }

    public String getAuthor() {
        return author;
    }
}