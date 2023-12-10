#include <iostream>
#include <cmath>

const int ROWS = 4;
const int COLS = 3;

void readMatrix(int arr[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++)
        for (int j = 0; j < COLS; j++)
            std::cin >> arr[i][j];
}

bool solveSystem(int arr[ROWS][COLS], double solution[COLS]) {
    for (int i = 0; i < ROWS - 1; i++) {
        if (arr[i][i] == 0) return false;

        for (int j = i + 1; j < ROWS - 1; j++) {
            double factor = static_cast<double>(arr[j][i]) / arr[i][i];
            for (int k = i; k < COLS; k++)
                arr[j][k] -= factor * arr[i][k];
        }
    }

    for (int i = ROWS - 2; i >= 0; i--) {
        solution[i] = arr[i][COLS - 1];
        for (int j = i + 1; j < COLS; j++)
            solution[i] -= arr[i][j] * solution[j];
        solution[i] = solution[i] / arr[i][i];
    }

    return true;
}

int main() {
    int arr[ROWS][COLS];
    double solution[COLS];
    readMatrix(arr);

    if (solveSystem(arr, solution)) {
        std::cout << "Solution: ";
        for (int i = 0; i < COLS; i++)
            std::cout << "x" << i + 1 << "=" << solution[i] << "; ";
        std::cout << std::endl;
    } else {
        std::cout << "No solution or multiple solutions exist." << std::endl;
    }
    return 0;
}
