#include <iostream>
#include "paymentmethod.cpp"

class Wallet : public PaymentMethod {
public:
    void pay() {
        std::cout << "Making payment via wallet" << std::endl;
    }
};