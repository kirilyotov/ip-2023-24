#include <iostream>

const int SIZE = 4;

void printMatrix(const int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            std::cout << arr[i][j] << " ";
        std::cout << std::endl;
    }
}

void fillSpiralMatrix(int arr[SIZE][SIZE]) {
    int value = 1;
    int top = 0, bottom = SIZE - 1, left = 0, right = SIZE - 1;

    while (value <= SIZE * SIZE) {
        for (int i = right; i >= left; i--) arr[top][i] = value++;
        top++;
        for (int i = top; i <= bottom; i++) arr[i][left] = value++;
        left++;
        for (int i = left; i <= right; i++) arr[bottom][i] = value++;
        bottom--;
        for (int i = bottom; i >= top; i--) arr[i][right] = value++;
        right--;
    }
}

int main() {
    int arr[SIZE][SIZE];
    fillSpiralMatrix(arr);

    printMatrix(arr);
    return 0;
}
