#include <iostream>
#include <string>

using namespace std;

// Superclass: Animal
class Animal {
public:
    // Method that all animals can use
    virtual void eat() const {
        cout << "This animal is eating" << endl;
    }
};

// Subclass: Dog (inherits from Animal)
class Dog : public Animal {
public:
    // Method specific to dogs
    void bark() const {
        cout << "The dog is barking" << endl;
    }

    // Override the eat method to provide Dog-specific behavior (optional)
    void eat() const override {
        cout << "The dog is eating" << endl;  // Can override if necessary
    }
};

// Main function
int main() {
    Dog dog;
    dog.eat();  // Inherited method from Animal class
    dog.bark(); // Method from Dog class

    // Output:
    // The dog is eating
    // The dog is barking

    return 0;
}