#include "PaymentProcessor.cpp"
#include "CreditCard.cpp"
#include "UPI.cpp"

int main() {
    PaymentProcessor processor;
    
    PaymentMethod* creditCard = new CreditCard();
    PaymentMethod* upi = new UPI();

    processor.processPayment(creditCard, 100);
    processor.processPayment(upi, 120);

    // Cleanup
    delete creditCard;
    delete upi;

    return 0;
} 