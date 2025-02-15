#ifndef READONLY_FILE_CPP
#define READONLY_FILE_CPP

#include <stdexcept>
#include "File.cpp"

class ReadOnlyFile : public File {
public:
    void write() override {
        throw std::runtime_error("Can't write to a read only file");
    }
};

#endif 