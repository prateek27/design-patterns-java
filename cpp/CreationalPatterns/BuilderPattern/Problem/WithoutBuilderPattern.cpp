#include <iostream>
#include <string>
#include "House.cpp"

using namespace std;

int main() {
    House house("Concrete", "Wood", "Shingles", true, true, false);

    // House house2("Concrete", "Wood", "Shingles"); // Constructor Explosion Issue (Cannot be done in C++ without overloading)

    cout << "Without Builder Pattern:" << endl;
    house.display();
    
    return 0;
}
