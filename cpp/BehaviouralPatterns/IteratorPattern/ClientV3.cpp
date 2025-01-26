#include <iostream>
#include "BookCollectionV3.cpp"

int main() {
    BookCollectionV3 bookCollection;
    bookCollection.addBook(Book("C++ Book"));
    bookCollection.addBook(Book("Java Book"));
    bookCollection.addBook(Book("Python Book"));

    // Use the custom iterator to iterate over the collection
    for (auto it = bookCollection.begin(); it != bookCollection.end(); ++it) {
        std::cout << (*it).toString() << std::endl;
    }

    return 0;
}