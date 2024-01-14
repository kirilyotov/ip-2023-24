#include <iostream>

const int MAX = 100;

bool searchWord(char matrix[MAX][MAX], int x, int y, const char word[], int index, int m, int n)
{
    if (x < 0 || y < 0 || x >= m || y >= n)
        return false;
    if (matrix[x][y] != word[index])
        return false;
    if (word[index + 1] == '\0')
        return true;

    char temp = matrix[x][y];
    matrix[x][y] = '#';

    bool found = searchWord(matrix, x + 1, y, word, index + 1, m, n) ||
                 searchWord(matrix, x - 1, y, word, index + 1, m, n) ||
                 searchWord(matrix, x, y + 1, word, index + 1, m, n) ||
                 searchWord(matrix, x, y - 1, word, index + 1, m, n);

    matrix[x][y] = temp; 
    return found;
}

bool findWord(char matrix[MAX][MAX], const char *word, int m, int n)
{
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            if (searchWord(matrix, i, j, word, 0, m, n))
                return true;

    return false;
}

int main()
{
    char matrix[MAX][MAX] = {{'A', 'B', 'C'}, {'D', 'T', 'A'}, {'G', 'H', 'I'}};
    char word[] = "CAT";
    std::cout << (findWord(matrix, word, 3, 3) ? "Found" : "Not Found") << std::endl;
    return 0;
}
