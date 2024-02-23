#include <iostream>

using namespace std;
void printArray(int arr[], int size) {
    cout << "Integer Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(double arr[], int size) {
    cout << "Double Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(char arr[], int size) {
    cout << "Character Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArr[] = {'H', 'e', 'l', 'l', 'o'};
    printArray(intArr, sizeof(intArr) / sizeof(int));
    printArray(doubleArr, sizeof(doubleArr) / sizeof(double));
    printArray(charArr, sizeof(charArr) / sizeof(char));

    return 0;
}

