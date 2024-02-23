#include <iostream>
#include <string>

using namespace std;

class MyClass {
public:
    int id;
    string name;
    MyClass(int i, const string& n) : id(i), name(n) {}
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    MyClass obj(1, "Object");

    MyClass* ptr = &obj;

    cout << "Object attributes accessed using pointer:" << endl;
    cout << "ID: " << ptr->id << ", Name: " << ptr->name << endl;

    cout << "Using display method:" << endl;
    ptr->display();

    return 0;
}

