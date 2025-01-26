#include <iostream>

// Payment Strategy Interface
class PaymentStrategy {
public:
    virtual void processPayment() = 0; // Pure virtual function
    virtual ~PaymentStrategy() = default; // Virtual destructor for proper cleanup
};

// Concrete Strategy: Credit Card
class CreditCardPayment : public PaymentStrategy {
public:
    void processPayment() override {
        std::cout << "Making payment via Credit Card" << std::endl;
    }
};

// Concrete Strategy: Debit Card
class DebitCardPayment : public PaymentStrategy {
public:
    void processPayment() override {
        std::cout << "Making payment via Debit Card" << std::endl;
    }
};

// Concrete Strategy: UPI
class UPIPayment : public PaymentStrategy {
public:
    void processPayment() override {
        std::cout << "Making payment via UPI" << std::endl;
    }
};

// Payment Service
class PaymentServiceII {
private:
    PaymentStrategy* strategy;
public:
    void setPaymentStrategy(PaymentStrategy* strategy) {
        this->strategy = strategy;
    }

    void pay() {
        strategy->processPayment(); // Polymorphic behavior
    }

    // Destructor to clean up dynamically allocated memory
    ~PaymentServiceII() {
        delete strategy;
    }
};

int main() {
    PaymentServiceII paymentService;

    // Setting payment strategy to UPI
    paymentService.setPaymentStrategy(new UPIPayment());
    paymentService.pay();
    return 0;
}