#include <iostream>
using namespace std;

int main() {
    char* ptr;
    ptr = new char;
    *ptr = 'A';
    cout << "Value pointed to by the pointer: " << *ptr << endl;
    delete ptr;

    return 0;
}

