#ifndef MULTIPURPOSE_MACHINE_CPP
#define MULTIPURPOSE_MACHINE_CPP

#include <iostream>
#include "Machine.cpp"

class MultiPurposeMachine : public Machine {
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