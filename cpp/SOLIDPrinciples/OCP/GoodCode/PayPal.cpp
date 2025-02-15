#ifndef PAYPAL_CPP
#define PAYPAL_CPP

#include <iostream>
#include "PaymentMethod.cpp"

class PayPal : public PaymentMethod {
public:
    void pay(double amount) override {
        std::cout << "Making Payment via PayPal: " << amount << std::endl;
    }
};

#endif 