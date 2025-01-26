#ifndef PAYMENTMETHOD_CPP
#define PAYMENTMETHOD_CPP

class PaymentMethod {
public:
    virtual void pay() = 0;
    virtual ~PaymentMethod() {}
};

#endif