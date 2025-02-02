#include <iostream>
#include "Transport.cpp"

using namespace std;

class Bus : public Transport {
public:
    void deliver() override {
        cout << "Deliver by bus" << endl;
    }
};
