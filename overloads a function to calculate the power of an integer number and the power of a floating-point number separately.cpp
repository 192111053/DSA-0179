#include <iostream>
#include <cmath>

using namespace std;
long long power(int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }
    return result;
}
double power(double base, double exponent) {
    return pow(base, exponent);
}

int main() {
    int intBase = 2;
    int intExponent = 5;
    double doubleBase = 2.5;
    double doubleExponent = 3.0;

    cout << "Power of " << intBase << " raised to " << intExponent << " (integer): " << power(intBase, intExponent) << endl;
    cout << "Power of " << doubleBase << " raised to " << doubleExponent << " (floating-point): " << power(doubleBase, doubleExponent) << endl;

    return 0;
}

