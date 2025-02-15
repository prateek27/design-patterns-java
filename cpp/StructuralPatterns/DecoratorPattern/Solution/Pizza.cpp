#ifndef PIZZA_CPP
#define PIZZA_CPP

#include <string>

class Pizza {
public:
    virtual ~Pizza() {}
    virtual std::string getDescription() = 0;
    virtual double getCost() = 0;
};

#endif 