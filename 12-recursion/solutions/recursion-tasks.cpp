#include <iostream>

// Task 1
void printNTo1(int N)
{
    if (N == 0)
    {
        return;
    }

    std::cout << N << " ";
    printNTo1(--N);
}

// Task 2
void print1ToN(int N)
{
    if (N <= 0)
    {
        return;
    }

    print1ToN(N - 1);
    std::cout << N << " ";
}

// Task 3
unsigned factorial(unsigned N)
{
    if (N <= 1)
    {
        return 1;
    }

    return N * factorial(N - 1);
}

// Task 4
int recursiveStrlen(const char *str)
{
    if (*str == '\0')
    {
        return 0;
    }

    return 1 + recursiveStrlen(str + 1);
}

// Task 5
unsigned sumOfDigits(unsigned N)
{
    if (N == 0)
        return 0;

    return N % 10 + sumOfDigits(N / 10);
}

// Task 6
int maxNumberInArray(int *arr, int size)
{
    if (size == 1)
    {
        return arr[0];
    }

    return std::max(arr[0], maxNumberInArray(arr + 1, size - 1));
}

void reverseStringInner(char *str, int start, int end);

// Task 7
void reverseString(char *str)
{
    int len = recursiveStrlen(str);
    reverseStringInner(str, 0, len-1);
}

void reverseStringInner(char *str, int start, int end)
{
    if (start >= end)
    {
        return;
    }

    // Swap first and last characters
    std::swap(str[start], str[end]);

    // Recursive call
    reverseStringInner(str, start + 1, end - 1);
}

// Task 8
int recursiveGCD(int a, int b)
{
    if (b == 0)
    {
        return a;
    }

    return recursiveGCD(b, a % b);
}

// Task 9
void recursiveStrcpy(char *dest, const char *src)
{
    if (*src == '\0')
    {
        *dest = '\0';
        return;
    }

    *dest = *src;
    recursiveStrcpy(dest + 1, src + 1);
}

int recursiveAtoi(const char *str)
{
    if (*str == '\0')
    {
        return 0;
    }

    return (*str - '0') + 10 * recursiveAtoi(str + 1);
}

int minIndexInArray(const int *arr, int size);

// Task 10
void recursiveSelectionSort(int *arr, int size)
{
    if (size <= 1)
    {
        return;
    }

    int minIndex = minIndexInArray(arr, size);
    std::swap(*arr, arr[minIndex]);
    recursiveSelectionSort(arr + 1, size - 1);
}

int minIndexInArray(const int *arr, int size)
{
    int minIndex = 0;

    for (int i = 1; i < size; i++)
    {
        if (arr[minIndex] > arr[i])
            minIndex = i;
    }

    return minIndex;
}

// Task 11
int recursiveBinarySearch(const int *arr, int start, int end, int element)
{
    if (start > end)
    {
        return -1;
    }

    int middle = (start + end) / 2;
    if (arr[middle] == element)
    {
        return middle;
    }

    if (arr[middle] > element)
    {
        return recursiveBinarySearch(arr, start, middle - 1, element);
    }

    return recursiveBinarySearch(arr, middle + 1, end, element);
}

void hanoi(int n, char from_rod, char to_rod, char aux_rod)
{
    if (n == 1)
    {
        std::cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << std::endl;
        return;
    }
    hanoi(n - 1, from_rod, aux_rod, to_rod);
    std::cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << std::endl;
    hanoi(n - 1, aux_rod, to_rod, from_rod);
}

bool isValid(char maze[100][100], int x, int y, int rows, int cols)
{
    return (x >= 0 && x < rows && y >= 0 && y < cols && maze[x][y] == ' ');
}

// Recursive function to find a path in the maze - This algorithm is called backtracking
bool findPath(char maze[100][100], int x, int y, int rows, int cols)
{
    // If (x, y) is the destination, return true
    if (x == rows - 1 && y == cols - 1)
    {
        maze[x][y] = '.';
        return true;
    }

    // Check if (x, y) is a valid position
    if (isValid(maze, x, y, rows, cols))
    {
        // Mark (x, y) as part of the path
        maze[x][y] = '.';

        // Try to find a path to the right
        if (findPath(maze, x + 1, y, rows, cols))
            return true;

        // Try to find a path downwards
        if (findPath(maze, x, y + 1, rows, cols))
            return true;

        // If neither direction works, unmark (x, y)
        maze[x][y] = ' ';
        return false;
    }

    return false;
}

int main()
{
    printNTo1(5);
    std::cout << std::endl;
    print1ToN(5);
    std::cout << std::endl;

    std::cout << "5! = " << factorial(5) << "\n";

    char str[] = "Size of this text is: ";
    std::cout << str << recursiveStrlen(str) << "\n";

    std::cout << "sum of digits 12345 is: " << sumOfDigits(12345) << "\n";

    const size_t ARRAY_SIZE = 4;
    int integerArray[] = {-9, 1, 2, 4, -20};

    std::cout << "Max number in array " << maxNumberInArray(integerArray, ARRAY_SIZE) << "\n";

    reverseString(str);

    std::cout << "Reversed string: " << str << "\n";

    std::cout << "\n";
    char *destination = new (std::nothrow) char[recursiveStrlen(str) + 1];
    if (destination)
    {
        recursiveStrcpy(destination, str);

        std::cout << "copy of str:" << destination << "\n";
        delete[] destination;
    }

    std::cout << "atoi of 12345: " << recursiveAtoi("12345") << "\n";

    recursiveSelectionSort(integerArray, ARRAY_SIZE);

    std::cout << "Sorted array: ";
    for (size_t i = 0; i < ARRAY_SIZE; i++)
    {
        std::cout << integerArray[i] << " ";
    }

    std::cout << "\n";

    std::cout << "Index of 4 in sorted array: " << recursiveBinarySearch(integerArray, 0, ARRAY_SIZE - 1, 4) << "\n";

    hanoi(3, 'A', 'C', 'B');

    const int MAX_SIZE = 100;

    // In maze '#' means wall, ' ' means path and '.' means visited
    char maze[MAX_SIZE][MAX_SIZE] = {
        {' ', ' ', '#', ' ', ' '},
        {'#', ' ', '#', '#', ' '},
        {' ', ' ', ' ', ' ', ' '},
        {' ', '#', '#', '#', ' '},
        {' ', ' ', ' ', ' ', ' '}};

    int rows = 5, cols = 5;

    if (findPath(maze, 0, 0, rows, cols))
    {
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                std::cout << maze[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
    else
    {
        std::cout << "No path found." << std::endl;
    }
}