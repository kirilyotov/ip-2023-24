#include <iostream>

int maxElem(const int arr[], int size)
{
    if (size <= 0)
        return 0;

    int max = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int minElement(const int arr[], int size)
{
    if (size <= 0)
        return 0;

    int min = arr[0];
    for (int i = 1; i < size; ++i)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    const int SIZE = 5;
    int arr[SIZE] = {5, 42, -3, 8, 12};

    std::cout << "Max element: " << maxElem(arr, SIZE) << std::endl;
    std::cout << "Min element: " << minElement(arr, SIZE) << std::endl;

    return 0;
}