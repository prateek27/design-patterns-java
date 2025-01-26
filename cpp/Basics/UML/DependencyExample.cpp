#include <iostream>
#include <string>

using namespace std;

// Document class (provides content to be printed)
class Document {
private:
    string content;

public:
    // Constructor
    Document(string content) {
        this->content = content;
    }

    // Getter for content
    string getContent() const {
        return content;
    }
};

// Printer class (depends on Document to print)
class Printer {
public:
    // Method to print the document
    void print(const Document& doc) const {
        cout << "Printing document: " << doc.getContent() << endl;
    }
};

// Main function demonstrating Dependency relationship
int main() {
    Document doc("Dependency Example Document");
    Printer printer;

    // Printer depends on Document to print its content
    printer.print(doc);  // Output: Printing document: Dependency Example Document

    return 0;
}