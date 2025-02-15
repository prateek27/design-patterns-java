#ifndef CHEESE_PIZZA_CPP
#define CHEESE_PIZZA_CPP

#include "BasicPizza.cpp"

class CheesePizza : public BasicPizza {
public:
    std::string getDescription() override {
        return BasicPizza::getDescription() + ", Cheese";
    }

    double getCost() override {
        return BasicPizza::getCost() + 1.00;
    }
};

#endif 