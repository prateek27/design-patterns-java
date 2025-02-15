#ifndef ORDER_SERVICE_CPP
#define ORDER_SERVICE_CPP

#include <string>

class OrderService {
public:
    std::string getOrderDetails(const std::string& orderId) {
        // Simulate fetching order details
        return "Order details for orderId: " + orderId;
    }
};

#endif 