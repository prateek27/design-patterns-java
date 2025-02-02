#ifndef TRANSPORT_CPP
#define TRANSPORT_CPP
#include <iostream>

using namespace std;

class Transport {
public:
    virtual void deliver() = 0;
    virtual ~Transport() = default;
};

#endif