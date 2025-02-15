#ifndef COPIER_CPP
#define COPIER_CPP

#include "../BadCode/Document.cpp"

class Copier {
public:
    virtual ~Copier() {}
    virtual void copy(Document* doc) = 0;
};

#endif 