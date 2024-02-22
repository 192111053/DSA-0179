#include <iostream>
#include <string>

class MyClass {
private:
    int value;
    std::string name;

public:
    MyClass(int val, const std::string& n) : value(val), name(n) {}
    bool operator==(const MyClass& other) const {
        return (value == other.value) && (name == other.name);
    }
};

int main() {
    MyClass obj1(42, "Example");
    MyClass obj2(42, "Example");
    MyClass obj3(99, "Another");
    if (obj1 == obj2) {
        std::cout << "obj1 is equal to obj2" << std::endl;
    } else {
        std::cout << "obj1 is not equal to obj2" << std::endl;
    }
    if (obj1 == obj3) {
        std::cout << "obj1 is equal to obj3" << std::endl;
    } else {
        std::cout << "obj1 is not equal to obj3" << std::endl;
    }

    return 0;
}

