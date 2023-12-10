#include <iostream>
#include <cstdlib>

const int SIZE = 3;


void initializeBoard(char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            board[i][j] = ' ';
}

void printBoard(const char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i) {
        for (int j = 0; j < SIZE; ++j)
            std::cout << board[i][j] << (j < SIZE - 1 ? "|" : "");
        std::cout << std::endl;
        if (i < SIZE - 1)
            std::cout << "-----\n";
    }
}

bool isWinner(const char board[SIZE][SIZE], char player) {
    for (int i = 0; i < SIZE; ++i)
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return true;

    for (int j = 0; j < SIZE; ++j)
        if (board[0][j] == player && board[1][j] == player && board[2][j] == player)
            return true;

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return true;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return true;

    return false;
}

bool isBoardFull(const char board[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; ++i)
        for (int j = 0; j < SIZE; ++j)
            if (board[i][j] == ' ')
                return false;
    return true;
}

void playGame() {
    char board[SIZE][SIZE];
    initializeBoard(board);
    char currentPlayer = 'X';

    while (true) {
        printBoard(board);
        int row, col;
        std::cout << "Player " << currentPlayer << ", enter row and column (1-3): ";
        std::cin >> row >> col;

        if (row < 1 || row > SIZE || col < 1 || col > SIZE || board[row-1][col-1] != ' ') {
            std::cout << "Invalid move. Try again." << std::endl;
            continue;
        }

        board[row-1][col-1] = currentPlayer;

        if (isWinner(board, currentPlayer)) {
            printBoard(board);
            std::cout << "Player " << currentPlayer << " wins!" << std::endl;
            break;
        }

        if (isBoardFull(board)) {
            printBoard(board);
            std::cout << "It's a draw!" << std::endl;
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }
}

int main() {
    playGame();
    return 0;
}
