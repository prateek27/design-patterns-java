#ifndef CHEESE_OLIVE_PIZZA_CPP
#define CHEESE_OLIVE_PIZZA_CPP

#include "CheesePizza.cpp"

class CheeseOlivePizza : public CheesePizza {
public:
    std::string getDescription() override {
        return CheesePizza::getDescription() + ", Olives";
    }

    double getCost() override {
        return CheesePizza::getCost() + 0.50;
    }
};

#endif 