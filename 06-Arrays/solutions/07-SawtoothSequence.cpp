#include <iostream>

bool isSawtooth(const int arr[], const int &size)
{
    if (size < 3)
    {
        return false;
    }
    for (size_t i = 0; i < size - 2; ++i)
    {
        if ((arr[i] < arr[i + 1] && arr[i + 1] < arr[i + 2]) ||
            (arr[i] > arr[i + 1] && arr[i + 1] > arr[i + 2]))
        {
            std::cout << arr[i];
            return false;
        }
    }
    return true;
}

int main()
{
    const int SIZE = 7;
    int sequence[SIZE] = {-97, 1798, -1, 9, 8, 177, 3};

    std::cout << (isSawtooth(sequence, SIZE) ? "Yes" : "No") << std::endl;
    return 0;
}
