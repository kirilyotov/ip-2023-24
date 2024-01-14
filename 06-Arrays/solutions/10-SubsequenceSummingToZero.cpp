#include <iostream>

bool hasZeroSumSubsequence(const int arr[], const int size)
{
    for (int i = 0; i < size; ++i)
    {
        int currentSum = 0;
        for (int j = i; j < size; ++j)
        {
            currentSum += arr[j];
            if (currentSum == 0)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int array[] = {1, 2, -3, 4, 5};

    int size = sizeof(array) / sizeof(array[0]);

    if (hasZeroSumSubsequence(array, size))
    {
        std::cout << "Yes" << std::endl;
    }
    else
    {
        std::cout << "No" << std::endl;
    }
    
    return 0;
}
