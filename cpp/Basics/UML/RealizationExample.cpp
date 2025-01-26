#include <iostream>
#include <string>

using namespace std;

// Payment interface (Realization)
class Payment {
public:
    // Pure virtual function (interface method)
    virtual void pay(double amount) const = 0;
};

// Class implementing the Payment interface
class CreditCardPayment : public Payment {
public:
    // Implement the pay method
    void pay(double amount) const override {
        cout << "Paid $" << amount << " using credit card." << endl;
    }
};

// Main function
int main() {
    // Pointer to base class Payment, pointing to derived class CreditCardPayment
    Payment* payment = new CreditCardPayment();
    payment->pay(100.0);  // Output: Paid $100.0 using credit card.

    delete payment; // Clean up the allocated memory
    return 0;
}