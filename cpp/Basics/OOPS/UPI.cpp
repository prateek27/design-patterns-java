#include <iostream>
#include <string>
#include "paymentmethod.cpp"

class UPI : public PaymentMethod {
private:
    std::string upiId;

public:
    UPI(const std::string& id) : upiId(id) {}

    void pay() {
        std::cout << "Making payment via UPI " << upiId << std::endl;
    }
};