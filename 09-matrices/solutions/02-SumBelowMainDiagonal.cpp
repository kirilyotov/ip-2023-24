#include <iostream>

const int MAX_SIZE = 100;

void readMatrix(int arr[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> arr[i][j];
}

int sumBelowMainDiagonal(const int arr[MAX_SIZE][MAX_SIZE], int n) {
    int sum = 0;
    for (int i = 1; i < n; ++i)
        for (int j = 0; j < i; ++j)
            sum += arr[i][j];
    return sum;
}

int main() {
    int n, arr[MAX_SIZE][MAX_SIZE];
    std::cin >> n;
    readMatrix(arr, n);

    std::cout << "Sum below main diagonal: " << sumBelowMainDiagonal(arr, n) << std::endl;
    return 0;
}
