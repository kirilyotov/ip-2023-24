#include <iostream>

void findPairs(const int arr[], const int &size, int targetSum = 42)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (arr[i] + arr[j] == targetSum)
            {
                std::cout << "(" << arr[i] << ", " << arr[j] << ")" << std::endl;
            }
        }
    }
}

int main()
{
    int array[] = {2, 15, 30, 12, 6, 36, 40};

    // Find size of array
    int size = sizeof(array) / sizeof(array[0]);

    findPairs(array, size);
    return 0;
}
