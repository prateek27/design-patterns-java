#include <iostream>
#include <vector>
#include <string>
#include "Book.cpp"

class BookCollectionV1 {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    std::vector<Book> getBooks() const {
        return books;
    }
};