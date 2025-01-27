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

    // Private Constructor (Only accessible by HouseBuilder)
    House(const string &foundation, const string &structure, const string &roof, 
          bool hasGarage, bool hasSwimmingPool, bool hasGarden)
        : foundation(foundation), structure(structure), roof(roof),
          hasGarage(hasGarage), hasSwimmingPool(hasSwimmingPool), hasGarden(hasGarden) {}

public:
    // Display method (equivalent to Java's toString)
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

    // Builder Class
    class HouseBuilder {
    private:
        string foundation;
        string structure;
        string roof;
        bool hasGarage = false;
        bool hasSwimmingPool = false;
        bool hasGarden = false;

    public:
        // Builder Constructor with mandatory parameters
        HouseBuilder(const string &foundation, const string &structure, const string &roof)
            : foundation(foundation), structure(structure), roof(roof) {}

        // Optional Parameters with method chaining
        HouseBuilder &setGarden(bool hasGarden) {
            this->hasGarden = hasGarden;
            return *this;
        }

        HouseBuilder &setSwimmingPool(bool hasSwimmingPool) {
            this->hasSwimmingPool = hasSwimmingPool;
            return *this;
        }

        HouseBuilder &setGarage(bool hasGarage) {
            this->hasGarage = hasGarage;
            return *this;
        }

        // Build function returns a constructed House object
        House build() {
            return House(foundation, structure, roof, hasGarage, hasSwimmingPool, hasGarden);
        }
    };
};
