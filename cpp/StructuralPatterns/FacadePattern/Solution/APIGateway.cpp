#ifndef API_GATEWAY_CPP
#define API_GATEWAY_CPP

#include <string>
#include "UserService.cpp"
#include "OrderService.cpp"
#include "PaymentService.cpp"

class APIGateway {
private:
    UserService userService;
    OrderService orderService;
    PaymentService paymentService;

public:
    std::string getFullOrderDetails(const std::string& userId, 
                                  const std::string& orderId, 
                                  const std::string& paymentId) {
        std::string userDetails = userService.getUserDetails(userId);
        std::string orderDetails = orderService.getOrderDetails(orderId);
        std::string paymentProcessing = paymentService.processPayment(paymentId);

        return userDetails + "\n" + orderDetails + "\n" + paymentProcessing;
    }
};

#endif 