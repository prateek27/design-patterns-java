#include <iostream>
#include "Transport.cpp"

using namespace std;

class Bike : public Transport {
public:
    void deliver() override {
        cout << "Deliver by bike" << endl;
    }
};
