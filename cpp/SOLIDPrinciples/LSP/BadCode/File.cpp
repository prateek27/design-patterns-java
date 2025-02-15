#ifndef FILE_CPP
#define FILE_CPP

#include <iostream>

class File {
public:
    virtual ~File() {}
    
    virtual void read() {
        std::cout << "reading from file..." << std::endl;
    }
    
    virtual void write() {
        std::cout << "Writing to file..." << std::endl;
    }
};

#endif 