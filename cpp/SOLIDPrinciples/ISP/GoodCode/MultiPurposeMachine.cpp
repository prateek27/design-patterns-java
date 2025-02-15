#ifndef MULTIPURPOSE_MACHINE_CPP
#define MULTIPURPOSE_MACHINE_CPP

#include <iostream>
#include "Printer.cpp"
#include "Scanner.cpp"
#include "Copier.cpp"

class MultiPurposeMachine : public Printer, public Scanner, public Copier {
public:
    void print(Document* doc) override {
        std::cout << "Printing document..." << std::endl;
    }

    void scan(Document* doc) override {
        std::cout << "Scan document..." << std::endl;
    }

    void copy(Document* doc) override {
        std::cout << "Copy document..." << std::endl;
    }
};

#endif 