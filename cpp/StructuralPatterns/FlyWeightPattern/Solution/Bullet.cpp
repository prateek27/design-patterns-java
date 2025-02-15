#ifndef BULLET_CPP
#define BULLET_CPP

#include <memory>
#include "BulletTypeFactory.cpp"

class Bullet {
private:
    std::shared_ptr<BulletType> type; // Intrinsic property shared by all bullets
    int x, y;                         // Extrinsic properties unique to each bullet
    int velocity;

public:
    Bullet(const std::string& color, int x, int y, int velocity) 
        : type(BulletTypeFactory::getBulletType(color)), 
          x(x), y(y), velocity(velocity) {
        std::cout << "Creating bullet at (" << x << ", " << y 
                 << ") with velocity " << velocity << std::endl;
    }

    void display() {
        std::cout << "Bullet at (" << x << ", " << y 
                 << ") moving at velocity " << velocity << std::endl;
    }
};

#endif 