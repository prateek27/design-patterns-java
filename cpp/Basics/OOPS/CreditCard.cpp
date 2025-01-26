#include <iostream>
#include <string>
#include "card.cpp"

class CreditCard : public Card {
public:
    CreditCard(const std::string& cardNo, const std::string& name) 
        : Card(cardNo, name) {}

    void pay() {
        std::cout << "Making payment via Credit Card" << std::endl;
    }
};