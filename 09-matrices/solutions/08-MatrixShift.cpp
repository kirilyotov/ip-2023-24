#include <iostream>

const int MAX_SIZE = 100;

void readMatrix(int arr[MAX_SIZE][MAX_SIZE], int n, int m) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            std::cin >> arr[i][j];
}

void printMatrix(const int arr[MAX_SIZE][MAX_SIZE], int n, int m) {
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
}

void shiftMatrix(int arr[MAX_SIZE][MAX_SIZE], int n, int m, int k) {
    int temp[MAX_SIZE][MAX_SIZE];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            temp[(i + k) % n][(j + k) % m] = arr[i][j];

    printMatrix(temp, n, m);
}

int main() {
    int n, m, k, arr[MAX_SIZE][MAX_SIZE];
    std::cin >> n >> m >> k;
    readMatrix(arr, n, m);

    shiftMatrix(arr, n, m, k);
    return 0;
}
