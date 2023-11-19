#include <iostream>
#include <vector>

void readArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << std::endl;
}

short isMonotonic(int sequence[], const int &size)
{
    bool increasing = false;
    bool decreasing = false;

    for (int i = 1; i < size; i++)
    {
        if (sequence[i] > sequence[i - 1])
        {
            increasing = true;
        }
        if (sequence[i] < sequence[i - 1])
        {
            decreasing = true;
        }
    }

    if (increasing && decreasing || !increasing && !decreasing)
    {
        return 0;
    }
    else if (increasing)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    const int MAX_SIZE = 128;
    int sequence[MAX_SIZE] = {0};

    int size;
    std::cout << "Enter size of sequence: ";
    std::cin >> size;

    std::cout << "Enter sequence: ";
    readArray(sequence, size);

    short result = isMonotonic(sequence, size);

    if (result == 1)
    {
        std::cout << "The sequence is increasing." << std::endl;
    }
    else if (result == -1)
    {
        std::cout << "The sequence is decreasing." << std::endl;
    }
    else
    {
        std::cout << "The sequence is neither increasing nor decreasing." << std::endl;
    }

    return 0;
}
