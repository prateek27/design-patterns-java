#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include "Book.cpp"
#include "BookCollectionV2.cpp"

int main() {
    BookCollectionV2 bookCollection;
    bookCollection.addBook(Book("C++ Book"));
    bookCollection.addBook(Book("Java Book"));
    bookCollection.addBook(Book("Python Book"));

    // Use the iterator directly
    for (auto it = bookCollection.begin(); it != bookCollection.end(); ++it) {
        std::cout << (*it).toString() << std::endl;
    }

    return 0;
}