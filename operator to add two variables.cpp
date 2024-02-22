#include <iostream>

class MyNumber {
private:
    int number;

public:
    MyNumber() : number(0) {}
    MyNumber(int num) : number(num) {}

    MyNumber operator+(const MyNumber& other) {
        MyNumber result;
        result.number = this->number + other.number;
        return result;
    }

    void display() {
        std::cout << "Number: " << number << std::endl;
    }
};

int main() {
    MyNumber num1(5);
    MyNumber num2(10);

    MyNumber sum = num1 + num2;
    sum.display();

    return 0;
}

