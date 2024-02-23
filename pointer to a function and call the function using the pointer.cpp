#include <iostream>
int add(int a, int b) {
    return a + b;
}

int main() {
    int (*ptr)(int, int);

    ptr = &add;

    int result = (*ptr)(4, 5);

    std::cout << "Result of adding 4 and 5 is: " << result << std::endl;

    return 0;
}

