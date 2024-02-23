#include <iostream>

using namespace std;

const int MAX_SIZE = 100;
void sum(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
void sum(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; ++i) {
        result[i] = arr1[i] + arr2[i];
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE] = {{1, 2}, {3, 4}};
    int mat2[MAX_SIZE][MAX_SIZE] = {{5, 6}, {7, 8}};
    int rows = 2, cols = 2;

    int arr1[MAX_SIZE] = {1, 2, 3, 4};
    int arr2[MAX_SIZE] = {5, 6, 7, 8};
    int size = 4;
    int result_mat[MAX_SIZE][MAX_SIZE];
    sum(mat1, mat2, result_mat, rows, cols);

    cout << "Matrix Sum:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << result_mat[i][j] << " ";
        }
        cout << endl;
    }

    int result_arr[MAX_SIZE];
    sum(arr1, arr2, result_arr, size);

    cout << "\nArray Sum:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << result_arr[i] << " ";
    }
    cout << endl;

    return 0;
}

