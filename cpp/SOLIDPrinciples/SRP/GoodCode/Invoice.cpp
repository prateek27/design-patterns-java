#ifndef INVOICE_CPP
#define INVOICE_CPP

#include <iostream>

class Invoice {
private:
    double amount;

public:
    Invoice(double amount) : amount(amount) {}

    void generateInvoice() {
        std::cout << "Invoice generated & printed for amount " << amount << std::endl;
    }

    double getAmount() const {
        return amount;
    }
};

#endif 