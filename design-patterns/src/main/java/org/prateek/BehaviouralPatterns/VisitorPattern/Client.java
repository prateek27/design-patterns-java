package org.prateek.BehaviouralPatterns.VisitorPattern;

import java.util.ArrayList;
import java.util.List;

public class Client {
    public static void main(String[] args) {
        PDFDocument pdfDoc = new PDFDocument("report.pdf", 25);
        WordDocument wordDoc = new WordDocument("letter.docx", "John Doe");
        TextDocument textDoc = new TextDocument("notes.txt", 3);

        List<Document> documents = new ArrayList<>();
        documents.add(pdfDoc);
        documents.add(wordDoc);
        documents.add(textDoc);

        System.out.println("Export Operation");
        DocumentVisitor exportVisitor = new ExportVisitor();
        for (Document doc : documents) {
            doc.accept(exportVisitor);
        }
        System.out.println();

        System.out.println("Print Operation");
        DocumentVisitor printVisitor = new PrintVisitor();
        for (Document doc : documents) {
            doc.accept(printVisitor);
        }
        System.out.println();

        System.out.println("Compress Operation");
        DocumentVisitor compressVisitor = new CompressVisitor();
        for (Document doc : documents) {
            doc.accept(compressVisitor);
        }
    }
}