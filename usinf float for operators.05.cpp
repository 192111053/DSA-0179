#include <iostream>
int main() {
    float num1, num2;
    std::cout << "Enter the first floating-point number: ";
    std::cin >> num1;
    std::cout << "Enter the second floating-point number: ";
    std::cin >> num2;
    float addition = num1 + num2;
    float subtraction = num1 - num2;
    float multiplication = num1 * num2;
    if (num2 != 0) {
        float division = num1 / num2;
        std::cout << "Addition: " << addition << std::endl;
        std::cout << "Subtraction: " << subtraction << std::endl;
        std::cout << "Multiplication: " << multiplication << std::endl;
        std::cout << "Division: " << division << std::endl;
    } else {
        std::cout << "Error: Division by zero is not allowed." << std::endl;
    }
    return 0;
}

