#include <iostream>
#include <string>

class PaymentService {
public:
    void processPayment(const std::string& paymentMethod) {
        if (paymentMethod == "Credit Card") {
            std::cout << "Making payment via credit card" << std::endl;
        }
        else if (paymentMethod == "Debit Card") {
            std::cout << "Making payment via debit card" << std::endl;
        }
        else if (paymentMethod == "UPI") {
            std::cout << "Making payment via UPI" << std::endl;
        }
        else {
            std::cout << "Unsupported Payment method" << std::endl;
        }
    }
};

int main() {
    PaymentService paymentService;
    paymentService.processPayment("UPI");

    return 0;
}