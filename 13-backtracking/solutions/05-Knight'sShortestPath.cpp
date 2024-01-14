#include <iostream>
#include <climits>

const int N = 8;
int dx[8] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[8] = {1, 2, 2, 1, -1, -2, -2, -1};
bool visited[N][N] = {false};

bool isValid(int x, int y)
{
    return x >= 0 && x < N && y >= 0 && y < N && !visited[x][y];
}

int minMoves(int x, int y, int targetX, int targetY, int steps)
{
    if (x == targetX && y == targetY)
        return steps;
    if (!isValid(x, y))
        return INT_MAX;

    visited[x][y] = true;
    int minSteps = INT_MAX;

    for (int i = 0; i < 8; i++)
    {
        int nextX = x + dx[i];
        int nextY = y + dy[i];

        minSteps = std::min(minSteps, minMoves(nextX, nextY, targetX, targetY, steps + 1));
    }

    visited[x][y] = false;
    return minSteps;
}

int main()
{
    int startX = 0, startY = 0;
    int endX = 7, endY = 7;

    int result = minMoves(startX, startY, endX, endY, 0);
    if (result == INT_MAX)
    {
        std::cout << "There is no path!" << std::endl;
    }
    else
    {
        std::cout << "Min moves: " << result << std::endl;
    }

    return 0;
}
