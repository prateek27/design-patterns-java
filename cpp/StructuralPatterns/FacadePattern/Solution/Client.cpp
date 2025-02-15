#include <iostream>
#include "APIGateway.cpp"

int main() {
    // Client code interacting with API Gateway (Facade)
    APIGateway apiGateway;
    
    // Task
    std::cout << apiGateway.getFullOrderDetails("123", "456", "789") << std::endl;

    return 0;
} 