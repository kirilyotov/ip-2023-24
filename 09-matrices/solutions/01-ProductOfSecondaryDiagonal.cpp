#include <iostream>

const int MAX_SIZE = 100;

void readMatrix(int arr[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> arr[i][j];
}

int productOfSecondaryDiagonal(const int arr[MAX_SIZE][MAX_SIZE], int n) {
    int product = 1;
    for (int i = 0; i < n; ++i)
        product *= arr[i][n - 1 - i];
    return product;
}

int main() {
    int n, arr[MAX_SIZE][MAX_SIZE];
    std::cin >> n;
    readMatrix(arr, n);

    std::cout << "Product of secondary diagonal: " << productOfSecondaryDiagonal(arr, n) << std::endl;
    return 0;
}
