#include <iostream>
#include <set>
#include <string>
#include "Book.cpp"

class BookCollectionV3 {
private:
    std::set<Book> books;

public:
    // Add a book to the collection
    void addBook(const Book& book) {
        books.insert(book);
    }

    // Define a custom iterator
    class BookIterator {
    private:
        std::set<Book>::iterator it;

    public:
        BookIterator(std::set<Book>::iterator it) : it(it) {}

        // Dereference operator to access the current Book as const reference
        const Book& operator*() const {
            return *it;
        }

        // Increment operator to move to the next book
        BookIterator& operator++() {
            ++it;
            return *this;
        }

        // Inequality operator for comparison in the loop
        bool operator!=(const BookIterator& other) const {
            return it != other.it;
        }
    };

    // Return the beginning of the set using the iterator
    BookIterator begin() {
        return BookIterator(books.begin());
    }

    // Return the end of the set using the iterator
    BookIterator end() {
        return BookIterator(books.end());
    }
};
