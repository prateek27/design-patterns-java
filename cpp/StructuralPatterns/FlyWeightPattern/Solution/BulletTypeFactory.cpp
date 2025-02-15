#ifndef BULLET_TYPE_FACTORY_CPP
#define BULLET_TYPE_FACTORY_CPP

#include <map>
#include <memory>
#include "BulletType.cpp"

class BulletTypeFactory {
private:
    static std::map<std::string, std::shared_ptr<BulletType> > bulletTypes;

public:
    static std::shared_ptr<BulletType> getBulletType(const std::string& color) {
        if (bulletTypes.find(color) == bulletTypes.end()) {
            bulletTypes[color] = std::make_shared<BulletType>(color);
        }
        return bulletTypes[color];
    }
};

// Initialize static member
std::map<std::string, std::shared_ptr<BulletType> > BulletTypeFactory::bulletTypes;

#endif 