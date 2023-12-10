#include <iostream>

const int MAX_SIZE = 100;

void readMatrix(int arr[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> arr[i][j];
}

void printMatrix(const int arr[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
}

void transposeMatrix(const int original[MAX_SIZE][MAX_SIZE], int transposed[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            transposed[j][i] = original[i][j];
}

int main() {
    int n, arr[MAX_SIZE][MAX_SIZE], transposed[MAX_SIZE][MAX_SIZE];
    std::cin >> n;

    readMatrix(arr, n);
    transposeMatrix(arr, transposed, n);
    printMatrix(transposed, n);

    return 0;
}
