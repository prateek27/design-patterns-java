#ifndef CARD_CPP
#define CARD_CPP

#include <string>

class PaymentMethod;

class Card : public PaymentMethod {
protected:
    std::string cardNo;
    std::string userName;

public:
    Card(const std::string& cardNo, const std::string& name) 
        : cardNo(cardNo), userName(name) {}

    std::string getCardNo() { return cardNo; }
    std::string getUserName() { return userName; }
};

#endif