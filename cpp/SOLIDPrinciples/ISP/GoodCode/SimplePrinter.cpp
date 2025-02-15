#ifndef SIMPLE_PRINTER_CPP
#define SIMPLE_PRINTER_CPP

#include <iostream>
#include "Printer.cpp"

class SimplePrinter : public Printer {
public:
    void print(Document* doc) override {
        std::cout << "Printing the document" << std::endl;
    }
};

#endif 