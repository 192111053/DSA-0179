#include <iostream>
using namespace std;

int main() {
    int* ptr;

    ptr = new int;

    *ptr = 42;

    cout << "Value pointed to by the pointer: " << *ptr << endl;

    delete ptr;

    return 0;
}

