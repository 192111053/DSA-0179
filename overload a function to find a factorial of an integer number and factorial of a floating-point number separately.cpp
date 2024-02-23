#include <iostream>
#include <cmath>

using namespace std;
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 2; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}
double factorial(double n) {
    return tgamma(n + 1);
}

int main() {
    int intNum = 5;
    double doubleNum = 5.5;
    cout << "Factorial of " << intNum << " (integer): " << factorial(intNum) << endl;
    cout << "Factorial of " << doubleNum << " (floating-point): " << factorial(doubleNum) << endl;

    return 0;
}

