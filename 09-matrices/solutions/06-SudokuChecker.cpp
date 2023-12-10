#include <iostream>

const int SIZE = 9;

void readMatrix(int arr[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            std::cin >> arr[i][j];
}

bool checkSudoku(const int board[SIZE][SIZE]) {
    bool rowCheck[SIZE][SIZE] = {false}, colCheck[SIZE][SIZE] = {false}, subgridCheck[SIZE][SIZE] = {false};

    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j) {
            int num = board[i][j] - 1, k = (i / 3) * 3 + j / 3;
            if (rowCheck[i][num] || colCheck[j][num] || subgridCheck[k][num])
                return false;
            rowCheck[i][num] = colCheck[j][num] = subgridCheck[k][num] = true;
        }
    }
    return true;
}

int main() {
    int board[SIZE][SIZE];
    readMatrix(board);

    std::cout << (checkSudoku(board) ? "Valid Sudoku" : "Invalid Sudoku") << std::endl;
    return 0;
}
