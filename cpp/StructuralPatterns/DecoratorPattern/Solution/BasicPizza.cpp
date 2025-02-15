#ifndef BASIC_PIZZA_CPP
#define BASIC_PIZZA_CPP

#include "Pizza.cpp"

class BasicPizza : public Pizza {
public:
    std::string getDescription() override {
        return "Basic Pizza";
    }

    double getCost() override {
        return 5.00; // base cost
    }
};

#endif 