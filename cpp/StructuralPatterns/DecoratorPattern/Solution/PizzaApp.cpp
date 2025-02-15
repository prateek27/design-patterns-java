#include <iostream>
#include "BasicPizza.cpp"
#include "CheeseDecorator.cpp"
#include "OliveDecorator.cpp"
#include "MushroomDecorator.cpp"

int main() {
    // Basic Pizza
    Pizza* pizza = new BasicPizza();

    // Add toppings
    pizza = new CheeseDecorator(pizza);
    pizza = new OliveDecorator(pizza);
    pizza = new MushroomDecorator(pizza);

    std::cout << pizza->getDescription() << std::endl;
    std::cout << pizza->getCost() << std::endl;

    // Cleanup is handled by decorator destructors
    delete pizza;

    return 0;
} 