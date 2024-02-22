#include <iostream>
#include <string>

class MyClass {
private:
    int value;
    std::string name;

public:
    MyClass(int val, const std::string& n) : value(val), name(n) {}
    friend std::ostream& operator<<(std::ostream& os, const MyClass& obj) {
        os << "Value: " << obj.value << ", Name: " << obj.name;
        return os;
    }
};

int main() {
    MyClass obj(42, "Example");
    std::cout << obj << std::endl; 

    return 0;
}

