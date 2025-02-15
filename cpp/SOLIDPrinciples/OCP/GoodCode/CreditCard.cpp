#ifndef CREDIT_CARD_CPP
#define CREDIT_CARD_CPP

#include <iostream>
#include "PaymentMethod.cpp"

class CreditCard : public PaymentMethod {
public:
    void pay(double amount) override {
        std::cout << "Making Payment via Credit Card: " << amount << std::endl;
    }
};

#endif 