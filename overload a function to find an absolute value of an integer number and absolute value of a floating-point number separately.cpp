#include <iostream>
#include <cmath>

using namespace std;
int absolute(int num) {
    return abs(num);
}

double absolute(double num) {
    return abs(num);
}

int main() {
    int intNum = -5;
    double doubleNum = -5.5;
    cout << "Absolute value of " << intNum << " (integer): " << absolute(intNum) << endl;
    cout << "Absolute value of " << doubleNum << " (floating-point): " << absolute(doubleNum) << endl;

    return 0;
}

