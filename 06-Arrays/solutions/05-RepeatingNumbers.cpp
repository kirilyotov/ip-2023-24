#include <iostream>

int validateInput(const int MAX_SIZE)
{

    int size = 0;
    do
    {
        std::cout << "Enter array size: ";
        std::cin >> size;
    } while (size < 1 || size > MAX_SIZE);

    return size;
}

void readArray(int arr[], const int size)
{
    std::cout << "Enter array elements: ";

    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << std::endl;
}

void printArray(const int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cout << arr[i] << " ";
    }
}

int repeatingNumbers(const int source[], int destination[], const int size)
{
    int destinationSize = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (source[i] == source[j])
            {
                destination[destinationSize++] = source[i];
                break;
            }
        }
    }

    return destinationSize;
}

int main()
{
    const int MAX_SIZE = 128;
    int array[MAX_SIZE] = {0};
    int repeating[MAX_SIZE] = {0};

    int size = validateInput(MAX_SIZE);

    readArray(array, size);

    int repeatingSize = repeatingNumbers(array, repeating, size);

    std::cout << "Repeating numbers: ";
    printArray(repeating, repeatingSize);

    return 0;
}