#include <iostream>
#include "paymentservice.cpp"
#include "creditcard.cpp"
#include "debitcard.cpp"
#include "upi.cpp"
#include "wallet.cpp"

int main() {
    PaymentService ps;
    ps.addPaymentMethod("PrateekDebitCard", new DebitCard("1234", "Prateek Narang"));
    ps.addPaymentMethod("PrateekCreditCard", new CreditCard("5678", "Prateek Narang"));
    ps.addPaymentMethod("PrateekUPI", new UPI("prateek27"));
    ps.addPaymentMethod("PrateekWallet", new Wallet());

    ps.makePayment("PrateekUPI");
    ps.makePayment("PrateekDebitCard");
    ps.makePayment("PrateekWallet");

    return 0;
}