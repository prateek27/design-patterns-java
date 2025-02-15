#ifndef PAYMENT_PROCESSOR_CPP
#define PAYMENT_PROCESSOR_CPP

#include <string>
#include <stdexcept>
#include <iostream>

class PaymentProcessor {
public:
    void processPayment(const std::string& paymentMethod, double amount) {
        if (paymentMethod == "CreditCard") {
            // business logic
            std::cout << "Making payment via Credit Card: " << amount << std::endl;
        }
        else if (paymentMethod == "DebitCard") {
            // business logic
            std::cout << "Making payment via Debit Card: " << amount << std::endl;
        }
        else if (paymentMethod == "PayPal") {
            // business logic
            std::cout << "Making payment via PayPal: " << amount << std::endl;
        }
        else {
            throw std::invalid_argument("Unsupported payment method " + paymentMethod);
        }
    }
};

#endif 