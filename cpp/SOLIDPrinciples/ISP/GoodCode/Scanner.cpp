#ifndef SCANNER_CPP
#define SCANNER_CPP

#include "../BadCode/Document.cpp"

class Scanner {
public:
    virtual ~Scanner() {}
    virtual void scan(Document* doc) = 0;
};

#endif 