#ifndef FILE_CPP
#define FILE_CPP

#include <string>
#include <iostream>
#include "FileSystemComponent.cpp"

class File : public FileSystemComponent {
private:
    std::string name;

public:
    File(const std::string& name) : name(name) {}

    void showDetails() override {
        std::cout << "File: " << name << std::endl;
    }
};

#endif 