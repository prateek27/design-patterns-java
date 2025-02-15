#ifndef PIZZA_DECORATOR_CPP
#define PIZZA_DECORATOR_CPP

#include "Pizza.cpp"

class PizzaDecorator : public Pizza {
protected:
    Pizza* decoratedPizza;

public:
    PizzaDecorator(Pizza* pizza) : decoratedPizza(pizza) {}

    virtual ~PizzaDecorator() {
        delete decoratedPizza;
    }

    std::string getDescription() override {
        return decoratedPizza->getDescription();
    }

    double getCost() override {
        return decoratedPizza->getCost();
    }
};

#endif 