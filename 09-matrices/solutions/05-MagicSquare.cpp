#include <iostream>

const int MAX_SIZE = 100;

void readMatrix(int arr[MAX_SIZE][MAX_SIZE], int n) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            std::cin >> arr[i][j];
}

bool isMagicSquare(const int arr[MAX_SIZE][MAX_SIZE], int n) {
    int sumDiagonal1 = 0, sumDiagonal2 = 0;
    for (int i = 0; i < n; ++i) {
        sumDiagonal1 += arr[i][i];
        sumDiagonal2 += arr[i][n - 1 - i];
    }
    if (sumDiagonal1 != sumDiagonal2) return false;

    for (int i = 0; i < n; ++i) {
        int rowSum = 0, colSum = 0;
        for (int j = 0; j < n; ++j) {
            rowSum += arr[i][j];
            colSum += arr[j][i];
        }
        if (rowSum != sumDiagonal1 || colSum != sumDiagonal1) return false;
    }
    return true;
}

int main() {
    int n, arr[MAX_SIZE][MAX_SIZE];
    std::cin >> n;
    readMatrix(arr, n);

    std::cout << (isMagicSquare(arr, n) ? "Magic square" : "Not a magic square") << std::endl;
    return 0;
}
