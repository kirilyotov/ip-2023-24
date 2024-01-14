#include <iostream>

int max(int a, int b, int c)
{
    return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}

int maxSum(int arr[], int n)
{
    if (n <= 0)
        return 0;
    return arr[n - 1] + max(maxSum(arr, n - 1), maxSum(arr, n - 2), maxSum(arr, n - 3));
}

int main()
{
    int arr[] = {1, 10, 3, 9, 2, 6, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::cout << maxSum(arr, n) << std::endl;
    return 0;
}