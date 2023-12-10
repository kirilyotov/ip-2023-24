#include <iostream>

const int MAX_SIZE = 100;

void readMatrix(int arr[MAX_SIZE][MAX_SIZE], int n, int m) {
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            std::cin >> arr[i][j];
}

bool isHappyNumber(const int arr[MAX_SIZE][MAX_SIZE], int n, int m, int& happyNumber) {
    for (int i = 0; i < n; ++i) {
        int minRow = arr[i][0], colIndex = 0;
        for (int j = 1; j < m; ++j)
            if (arr[i][j] < minRow) {
                minRow = arr[i][j];
                colIndex = j;
            }

        bool isMax = true;
        for (int k = 0; k < n; ++k)
            if (arr[k][colIndex] > minRow) {
                isMax = false;
                break;
            }

        if (isMax) {
            happyNumber = minRow;
            return true;
        }
    }
    return false;
}

int main() {
    int n, m, arr[MAX_SIZE][MAX_SIZE], happyNumber;
    std::cin >> n >> m;
    readMatrix(arr, n, m);

    if (isHappyNumber(arr, n, m, happyNumber))
        std::cout << "Happy number: " << happyNumber << std::endl;
    else
        std::cout << "No happy number found." << std::endl;
    return 0;
}
