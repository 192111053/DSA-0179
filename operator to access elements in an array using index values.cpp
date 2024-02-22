#include <iostream>

class MyArray {
private:
    int* data;
    int size;

public:
    MyArray(int sz) : size(sz) {
        data = new int[size];
    }
    ~MyArray() {
        delete[] data;
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            std::cerr << "Index out of bounds!" << std::endl;
            exit(1);
        }
        return data[index];
    }
};

int main() {
    const int SIZE = 5;
    MyArray arr(SIZE);
    for (int i = 0; i < SIZE; ++i) {
        arr[i] = i * 10;
    }

    for (int i = 0; i < SIZE; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << std::endl;
    }

    return 0;
}

