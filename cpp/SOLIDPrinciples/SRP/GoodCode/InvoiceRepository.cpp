#ifndef INVOICE_REPOSITORY_CPP
#define INVOICE_REPOSITORY_CPP

#include <iostream>

class InvoiceRepository {
public:
    void saveToDatabase() {
        std::cout << "Saving invoice to Database" << std::endl;
    }
};

#endif 