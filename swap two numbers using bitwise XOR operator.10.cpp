#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter the first integer: ";
    std::cin >> num1;
    std::cout << "Enter the second integer: ";
    std::cin >> num2;
    std::cout << "Before swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;
    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    std::cout << "After swapping: num1 = " << num1 << ", num2 = " << num2 << std::endl;	
    return 0;
}

