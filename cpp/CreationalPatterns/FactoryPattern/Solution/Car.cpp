#include <iostream>
#include "Transport.cpp"

using namespace std;

class Car : public Transport {
public:
    void deliver() override {
        cout << "Deliver by car" << endl;
    }
};
