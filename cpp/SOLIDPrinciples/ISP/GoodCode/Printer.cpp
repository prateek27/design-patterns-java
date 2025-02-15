#ifndef PRINTER_CPP
#define PRINTER_CPP

#include "../BadCode/Document.cpp"

class Printer {
public:
    virtual ~Printer() {}
    virtual void print(Document* doc) = 0;
};

#endif 