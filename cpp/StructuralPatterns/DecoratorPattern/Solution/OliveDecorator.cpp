#ifndef OLIVE_DECORATOR_CPP
#define OLIVE_DECORATOR_CPP

#include "PizzaDecorator.cpp"

class OliveDecorator : public PizzaDecorator {
public:
    OliveDecorator(Pizza* pizza) : PizzaDecorator(pizza) {}

    std::string getDescription() override {
        return decoratedPizza->getDescription() + ", Olive";
    }

    double getCost() override {
        return decoratedPizza->getCost() + 0.50;
    }
};

#endif 