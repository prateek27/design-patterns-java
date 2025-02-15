#include <iostream>
#include "UserService.cpp"
#include "OrderService.cpp"
#include "PaymentService.cpp"

int main() {
    // Client code interacting with different services directly
    UserService userService;
    OrderService orderService;
    PaymentService paymentService;

    // Task
    std::cout << userService.getUserDetails("123") << std::endl;
    std::cout << orderService.getOrderDetails("456") << std::endl;
    std::cout << paymentService.processPayment("789") << std::endl;

    return 0;
} 