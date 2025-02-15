#ifndef SIMPLE_PRINTER_CPP
#define SIMPLE_PRINTER_CPP

#include <iostream>
#include <stdexcept>
#include "Machine.cpp"

class SimplePrinter : public Machine {
public:
    void print(Document* doc) override {
        std::cout << "Printing document..." << std::endl;
    }

    void scan(Document* doc) override {
        throw std::runtime_error("Scan not supported.");
    }

    void copy(Document* doc) override {
        throw std::runtime_error("Copy not supported.");
    }
};

#endif 