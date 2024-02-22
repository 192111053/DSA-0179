#include <iostream>
int max(int a, int b) {
    return (a > b) ? a : b;
}

double max(double a, double b) {
    return (a > b) ? a : b;
}

char max(char a, char b) {
    return (a > b) ? a : b;
}

int main() {
    int maxInt = max(5, 10);
    std::cout << "Max of integers: " << maxInt << std::endl;
    double maxDouble = max(3.5, 2.5);
    std::cout << "Max of doubles: " << maxDouble << std::endl;
    char maxChar = max('a', 'z');
    std::cout << "Max of characters: " << maxChar << std::endl;

    return 0;
}

