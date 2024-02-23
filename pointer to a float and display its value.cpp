#include <iostream>
using namespace std;

int main() {
    float* ptr;
    ptr = new float;
    *ptr = 3.14f;
    cout << "Value pointed to by the pointer: " << *ptr << endl;

    delete ptr;

    return 0;
}

