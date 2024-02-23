#include <iostream>
using namespace std;

int main() {
    double* ptr;
    ptr = new double;
    *ptr = 3.14159;
    cout << "Value pointed to by the pointer: " << *ptr << endl;
    delete ptr;

    return 0;
}

