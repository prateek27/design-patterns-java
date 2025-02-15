#ifndef PAYMENT_METHOD_CPP
#define PAYMENT_METHOD_CPP

class PaymentMethod {
public:
    virtual ~PaymentMethod() {}
    virtual void pay(double amount) = 0;
};

#endif 