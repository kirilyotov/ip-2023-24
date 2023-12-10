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

void matrixSum(const int arr1[MAX_SIZE][MAX_SIZE], const int arr2[MAX_SIZE][MAX_SIZE], int result[MAX_SIZE][MAX_SIZE], int n, int m) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            result[i][j] = arr1[i][j] + arr2[i][j];
}

int main() {
    int n, m, arr1[MAX_SIZE][MAX_SIZE], arr2[MAX_SIZE][MAX_SIZE], sum[MAX_SIZE][MAX_SIZE];
    std::cin >> n >> m;

    readMatrix(arr1, n, m);
    readMatrix(arr2, n, m);

    matrixSum(arr1, arr2, sum, n, m);
    printMatrix(sum, n, m);

    return 0;
}
