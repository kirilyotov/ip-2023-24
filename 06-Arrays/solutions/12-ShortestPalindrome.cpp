#include <iostream>

void readArray(int arr[], const int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
}

int findShortestPalindrome(int arr[], const int &n, int &minidx)
{
    int minL = INT32_MAX;
    for (int i = n - 1; i >= n / 2; i--)
    {
        int j = 1;
        while (i - j >= 0 && i + j < n)
        {
            if (arr[i - j] != arr[i + j])
            {
                break;
            }
            j++;
        }
        if (minL > j)
        {
            minL = j;
            minidx = i;
        }
    }
    return minL;
}

void createPalindrome(int arr[], const int &n, int minidx, int pal[])
{
    int in = 0;
    for (int i = 0; i <= minidx; i++)
    {
        pal[in++] = arr[i];
    }
    for (int i = minidx - 1; i >= 0; i--)
    {
        pal[in++] = arr[i];
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int n;
    int arr[200];
    int pal[400];

    std::cin >> n;

    readArray(arr, n);

    int minidx;
    findShortestPalindrome(arr, n, minidx);

    createPalindrome(arr, n, minidx, pal);

    printArray(pal, 2 * minidx + 1);

    return 0;
}
