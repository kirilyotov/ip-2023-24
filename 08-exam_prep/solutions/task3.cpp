#include <iostream>

void removeAt(float arr[], unsigned& inOutSize, unsigned atIndex)
{
    for (unsigned i = atIndex; i < inOutSize - 1; i++)
        arr[i] = arr[i + 1];

    inOutSize--;
}

float average(const float arr[], unsigned size)
{
    float sum = 0;
    for (unsigned i = 0; i < size; i++)
        sum += arr[i];

    return sum / size;
}

void removeLessThanAverage(float arr[], unsigned& inOutSize)
{
    float avg = average(arr, inOutSize);
    for (unsigned i = 0; i < inOutSize; i++)
    {
        // Using a while and not an if, since after removing an element
        // the next element will take its place and thus we'll
        // have to check the i'th index again and again as long
        // as we are removing the i'th element.
        while ( arr[i] < avg )
        {
            removeAt(arr, inOutSize, i);
        }
    }
}

void printArray(const float arr[], unsigned size)
{
    for (unsigned i = 0; i < size; i++)
        std::cout << arr[i] << ' ';
    std::cout << '\n';
}

int main()
{
    const int MAX = 1000;
    float arr[MAX] = { 0, };

    int N;
    std::cin >> N;
    if ( N < 0 || N > 100 )
    {
        std::cout << "Wrong input\n";
        return -1;
    }

    unsigned size = N;
    for (unsigned i = 0; i < size; i++)
        std::cin >> arr[i];

    printArray(arr, size);
    removeLessThanAverage(arr, size);
    printArray(arr, size);

    return 0;
}
