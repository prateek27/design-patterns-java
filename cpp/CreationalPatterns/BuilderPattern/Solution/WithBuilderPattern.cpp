#include <iostream>
#include <string>
#include "House.cpp"

using namespace std;

int main() {
    // Using Builder Pattern to construct House object
    House house = House::HouseBuilder("Concrete", "Wooden", "Tile")
                    .setGarden(true)
                    .setSwimmingPool(true)
                    .setGarage(false)
                    .build();

    cout << "With Builder Pattern:" << endl;
    house.display();

    return 0;
}
