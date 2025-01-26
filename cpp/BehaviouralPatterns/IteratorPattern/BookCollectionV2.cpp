#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include "Book.cpp"

class BookCollectionV2 {
private:
    std::vector<Book> books;

public:
    void addBook(const Book& book) {
        books.push_back(book);
    }

    class BookIterator : public std::iterator<std::input_iterator_tag, Book> {
    private:
        const std::vector<Book>& books;
        size_t position;

    public:
        BookIterator(const std::vector<Book>& books, size_t position = 0) 
            : books(books), position(position) {}

        bool hasNext() const {
            return position < books.size();
        }

        Book next() {
            return books[position++];
        }

        // Overload dereference operator
        const Book& operator*() const {
            return books[position];
        }

        // Overload increment operator
        BookIterator& operator++() {
            ++position;
            return *this;
        }

        // Overload inequality operator
        bool operator!=(const BookIterator& other) const {
            return position != other.position;
        }
    };

    // These are the necessary functions for range-based for loops
    BookIterator begin() {
        return BookIterator(books, 0);
    }

    BookIterator end() {
        return BookIterator(books, books.size());
    }
};