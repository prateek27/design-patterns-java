#ifndef REAL_IMAGE_CPP
#define REAL_IMAGE_CPP

#include <string>
#include <iostream>
#include "Image.cpp"

class RealImage : public Image {
private:
    std::string filename;

    void loadImageFromDisk() {
        std::cout << "Loading image from disk " << filename << std::endl;
    }

public:
    RealImage(const std::string& filename) : filename(filename) {
        loadImageFromDisk(); // Expensive Operation
    }

    void display() override {
        std::cout << "Displaying: " << filename << std::endl;
    }
};

#endif 