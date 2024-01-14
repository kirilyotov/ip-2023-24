#include <iostream>

const int MAX = 100;

int maxPathSum(int matrix[MAX][MAX], int i, int j, int m, int n)
{
    if (i >= m || j >= n)
        return 0;
    return matrix[i][j] + std::max(maxPathSum(matrix, i + 1, j, m, n), maxPathSum(matrix, i, j + 1, m, n));
}

int main()
{
    int matrix[MAX][MAX] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    std::cout << maxPathSum(matrix, 0, 0, 3, 3) << std::endl;
    return 0;
}
