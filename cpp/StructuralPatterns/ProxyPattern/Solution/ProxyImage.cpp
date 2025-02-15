#ifndef PROXY_IMAGE_CPP
#define PROXY_IMAGE_CPP

#include <string>
#include "RealImage.cpp"

using namespace std;

class ProxyImage : public Image {
private:
    string filename;
    RealImage* realImage; // Using raw pointer instead of unique_ptr

public:
    ProxyImage(const std::string& filename) : filename(filename), realImage(nullptr) {}

    void display() {
        if (realImage == nullptr) {
            realImage = new RealImage(filename); // Image is loaded + cached
        }
        realImage->display();
    }

    // Add destructor to clean up
    ~ProxyImage() {
        delete realImage;
    }
};

#endif 