#include <iostream>

void readArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << std::endl;
}

int getSecondLargestElement(const int arr[], const int size)
{
    int max = arr[0];
    int secondMax = arr[0];

    for (int i = 1; i < size; i++)
    {
        if (arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if (arr[i] > secondMax)
        {
            secondMax = arr[i];
        }
    }
    std::cout << secondMax << std::endl;
    return secondMax;
}

int main()
{
    const int SIZE = 128;
    int arr[SIZE] = {0};
    getSecondLargestElement(arr, SIZE);

    return 0;
}