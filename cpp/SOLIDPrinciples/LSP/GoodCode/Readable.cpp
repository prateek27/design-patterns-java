#ifndef READABLE_CPP
#define READABLE_CPP

class Readable {
public:
    virtual ~Readable() {}
    virtual void read() = 0;
};

#endif 