#include <iostream>
#include <string>

using namespace std;

class House {
private:
    string foundation;
    string structure;
    string roof;
    bool hasGarage;
    bool hasSwimmingPool;
    bool hasGarden;

public:
    // Constructor
    House(string foundation, string structure, string roof, bool hasGarage, bool hasSwimmingPool, bool hasGarden)
        : foundation(foundation), structure(structure), roof(roof), hasGarage(hasGarage), hasSwimmingPool(false), hasGarden(hasGarden) {}

    // toString equivalent method
    void display() const {
        cout << "House {"
             << " foundation='" << foundation << "'"
             << ", structure='" << structure << "'"
             << ", roof='" << roof << "'"
             << ", hasGarage=" << (hasGarage ? "true" : "false")
             << ", hasSwimmingPool=" << (hasSwimmingPool ? "true" : "false")
             << ", hasGarden=" << (hasGarden ? "true" : "false")
             << " }" << endl;
    }
};