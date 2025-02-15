#ifndef PAYMENT_PROCESSOR_CPP
#define PAYMENT_PROCESSOR_CPP

#include "PaymentMethod.cpp"

class PaymentProcessor {
public:
    void processPayment(PaymentMethod* paymentMethod, double amount) {
        paymentMethod->pay(amount);
    }
};

#endif 