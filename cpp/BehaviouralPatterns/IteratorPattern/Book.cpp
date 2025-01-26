#ifndef BOOK_CPP
#define BOOK_CPP

#include <iostream>
#include <string>

class Book {
private:
    std::string title;

public:
    // Constructor to initialize the title of the book
    Book(const std::string& title) : title(title) {}

    // Getter for title
    std::string getTitle() const {
        return title;
    }

    std::string toString() const {
        return "Book{title='" + title + "'}";
    }

    // Comparison operator for comparing books by their titles
    bool operator<(const Book& other) const {
        return title < other.title;
    }

    // Comparison operator for comparing books by their titles (equivalent to compareTo in Java)
    bool operator>(const Book& other) const {
        return title > other.title;
    }

    bool operator==(const Book& other) const {
        return title == other.title;
    }
};

#endif