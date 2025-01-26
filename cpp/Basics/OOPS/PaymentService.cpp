#include <map>
#include <string>
#include "paymentmethod.cpp"

class PaymentService {
private:
    std::map<std::string, PaymentMethod*> paymentMethods;

public:
    PaymentService() {}

    void addPaymentMethod(const std::string& name, PaymentMethod* pm) {
        paymentMethods[name] = pm;
    }

    void makePayment(const std::string& name) {
        std::map<std::string, PaymentMethod*>::iterator it = paymentMethods.find(name);
        if (it != paymentMethods.end()) {
            it->second->pay();
        }
    }

    ~PaymentService() {
        for (std::map<std::string, PaymentMethod*>::iterator it = paymentMethods.begin(); 
             it != paymentMethods.end(); ++it) {
            delete it->second;
        }
    }
};