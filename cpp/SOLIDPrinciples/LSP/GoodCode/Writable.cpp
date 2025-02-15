#ifndef WRITABLE_CPP
#define WRITABLE_CPP

class Writable {
public:
    virtual ~Writable() {}
    virtual void write() = 0;
};

#endif 