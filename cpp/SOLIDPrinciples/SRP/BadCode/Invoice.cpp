#ifndef INVOICE_CPP
#define INVOICE_CPP

#include <iostream>

class Invoice {
private:
    double amount;

public:
    Invoice(double amount) : amount(amount) {}

    // Additional Functionality
    void generateInvoice() {
        std::cout << "Invoice generated & printed for amount " << amount << std::endl;
    }

    void saveToDatabase() {
        std::cout << "Saving invoice to Database" << std::endl;
    }

    void sendEmailNotification() {
        std::cout << "Sending email notification for invoice" << std::endl;
    }
};

#endif 