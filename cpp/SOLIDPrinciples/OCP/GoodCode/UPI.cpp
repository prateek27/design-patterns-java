#ifndef UPI_CPP
#define UPI_CPP

#include <iostream>
#include "PaymentMethod.cpp"

class UPI : public PaymentMethod {
public:
    void pay(double amount) override {
        std::cout << "Making payment via UPI: " << amount << std::endl;
    }
};

#endif 