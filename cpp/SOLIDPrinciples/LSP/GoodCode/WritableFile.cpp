#ifndef WRITABLE_FILE_CPP
#define WRITABLE_FILE_CPP

#include <iostream>
#include "ReadableFile.cpp"
#include "Writable.cpp"

class WritableFile : public ReadableFile, public Writable {
public:
    void write() override {
        std::cout << "Writing to file" << std::endl;
    }
};

#endif 