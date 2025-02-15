#ifndef BULLET_TYPE_CPP
#define BULLET_TYPE_CPP

#include <string>
#include <iostream>

// Flyweight Class
class BulletType {
private:
    std::string color; // Intrinsic Property

public:
    BulletType(const std::string& color) : color(color) {
        std::cout << "Creating bulletType with color " << color << std::endl;
    }
};

#endif 