#ifndef READABLE_FILE_CPP
#define READABLE_FILE_CPP

#include <iostream>
#include "Readable.cpp"

class ReadableFile : public Readable {
public:
    void read() override {
        std::cout << "Reading from a file" << std::endl;
    }
};

#endif 