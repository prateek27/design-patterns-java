#ifndef MACHINE_CPP
#define MACHINE_CPP

#include "Document.cpp"

class Machine {
public:
    virtual ~Machine() {}
    virtual void print(Document* doc) = 0;
    virtual void scan(Document* doc) = 0;
    virtual void copy(Document* doc) = 0;
};

#endif 