#ifndef CHEESE_DECORATOR_CPP
#define CHEESE_DECORATOR_CPP

#include "PizzaDecorator.cpp"

class CheeseDecorator : public PizzaDecorator {
public:
    CheeseDecorator(Pizza* pizza) : PizzaDecorator(pizza) {}

    std::string getDescription() override {
        return decoratedPizza->getDescription() + ", Cheese";
    }

    double getCost() override {
        return decoratedPizza->getCost() + 1.00;
    }
};

#endif 