#include <iostream>
#include <algorithm>

using namespace std;
void sortArray(int arr[], int size) {
    sort(arr, arr + size);
}
void sortArray(double arr[], int size) {
    sort(arr, arr + size);
}
template <typename T>
void printArray(T arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int intArr[] = {5, 2, 8, 1, 9};
    double doubleArr[] = {3.3, 1.1, 4.4, 2.2, 5.5};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    sortArray(intArr, intSize);
    cout << "Sorted Integer Array: ";
    printArray(intArr, intSize);
    sortArray(doubleArr, doubleSize);
    cout << "Sorted Double Array: ";
    printArray(doubleArr, doubleSize);

    return 0;
}

