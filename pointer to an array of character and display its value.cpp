#include <iostream>
using namespace std;

int main() {
    char arr[] = {'H', 'e', 'l', 'l', 'o', ',' , ' ', 'w', 'o', 'r', 'l', 'd', '!'};
    char* ptr = arr;
    cout << "Characters in the array: ";
    while (*ptr != '\0') {
        cout << *ptr;
        ptr++;
    }
    cout << endl;

    return 0;
}

