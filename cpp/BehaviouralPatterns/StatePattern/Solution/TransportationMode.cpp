#ifndef TransportationMode_CPP
#define TransportationMode_CPP

#include <string>

class TransportationMode {
public:
    virtual int calcETA() = 0;
    virtual std::string getDirection() = 0;
    virtual ~TransportationMode() = default;
};

#endif