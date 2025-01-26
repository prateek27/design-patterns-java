#include <iostream>
#include <string>
#include "card.cpp"

class DebitCard : public Card {
public:
    DebitCard(const std::string& cardNo, const std::string& name) 
        : Card(cardNo, name) {}

    void pay() {
        std::cout << "Making payment via Debit Card " << cardNo << std::endl;
    }
};