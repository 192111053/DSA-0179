#include <iostream>

class MySubtractor {
private:
    int value;

public:
    MySubtractor(int val) : value(val) {}

    MySubtractor operator-(const MySubtractor& other) {
        return MySubtractor(this->value - other.value);
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MySubtractor num1(10);
    MySubtractor num2(5);

    MySubtractor result = num1 - num2;

    std::cout << "Result of subtraction:" << std::endl;
    result.display(); 

    return 0;
}

