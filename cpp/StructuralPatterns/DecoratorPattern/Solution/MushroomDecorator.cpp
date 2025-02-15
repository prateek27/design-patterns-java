#ifndef MUSHROOM_DECORATOR_CPP
#define MUSHROOM_DECORATOR_CPP

#include "PizzaDecorator.cpp"

class MushroomDecorator : public PizzaDecorator {
public:
    MushroomDecorator(Pizza* pizza) : PizzaDecorator(pizza) {}

    std::string getDescription() override {
        return decoratedPizza->getDescription() + ", Mushroom";
    }

    double getCost() override {
        return decoratedPizza->getCost() + 2.00;
    }
};

#endif 