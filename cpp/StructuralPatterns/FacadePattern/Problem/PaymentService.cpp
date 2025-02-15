#ifndef PAYMENT_SERVICE_CPP
#define PAYMENT_SERVICE_CPP

#include <string>

class PaymentService {
public:
    std::string processPayment(const std::string& paymentId) {
        // Simulate payment processing
        return "Processing payment with paymentId: " + paymentId;
    }
};

#endif 