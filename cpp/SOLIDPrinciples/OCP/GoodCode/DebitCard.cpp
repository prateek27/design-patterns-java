#ifndef DEBIT_CARD_CPP
#define DEBIT_CARD_CPP

#include <iostream>
#include "PaymentMethod.cpp"

class DebitCard : public PaymentMethod {
public:
    void pay(double amount) override {
        std::cout << "Making Payment via Debit Card: " << amount << std::endl;
    }
};

#endif 