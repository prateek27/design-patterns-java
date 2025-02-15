#include <iostream>
#include "CheeseOlivePizza.cpp"

int main() {
    Pizza* pizza = new CheeseOlivePizza();
    std::cout << pizza->getDescription() << std::endl;
    std::cout << pizza->getCost() << std::endl;

    delete pizza;
    return 0;
} 