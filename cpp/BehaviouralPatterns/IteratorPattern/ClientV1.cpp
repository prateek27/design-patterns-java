#include <iostream>
#include <vector>
#include <string>
#include "Book.cpp"
#include "BookCollectionV1.cpp"

int main() {
    BookCollectionV1 bookCollection;
    bookCollection.addBook(Book("C++ Book"));
    bookCollection.addBook(Book("Java Book"));
    bookCollection.addBook(Book("Python Book"));

    for (size_t i = 0; i < bookCollection.getBooks().size(); ++i) {
        std::cout << bookCollection.getBooks()[i].toString() << std::endl;
    }

    return 0;
}
