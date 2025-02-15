#ifndef FILE_CPP
#define FILE_CPP

#include <string>
#include <iostream>

class File {
private:
    std::string name;

public:
    File(const std::string& name) : name(name) {}

    void showDetails() {
        std::cout << "File: " << name << std::endl;
    }
};

#endif 