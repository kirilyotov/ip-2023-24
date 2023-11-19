#include <iostream>

void readArray(int arr[], const int size)
{
    for (int i = 0; i < size; i++)
    {
        std::cin >> arr[i];
    }
    std::cout << std::endl;
}

double averageOfEvenNumbers(const int arr[], const int size)
{
    int sum = 0;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
            count++;
        }
    }
    return (double)sum / count;
}

int sumOfEvenNumbers(const int arr[], const int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int sumOfOddNUmbers(const int arr[], const int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            sum += arr[i];
        }
    }
    return sum;
}

int main()
{
    const int size = 128;
    int arr[size] = {0};
    int N = 0;
    std::cout << "Enter the size of the array: ";
    std::cin >> N;

    std::cout << "Enter the elements of the array: ";
    readArray(arr, N);

    std::cout << "The average of the even numbers is: " << averageOfEvenNumbers(arr, size) << std::endl;

    std::cout << "Product of even and odd number is: "
              << sumOfEvenNumbers(arr, size) * sumOfOddNUmbers(arr, size) << std::endl;

    return 0;
}