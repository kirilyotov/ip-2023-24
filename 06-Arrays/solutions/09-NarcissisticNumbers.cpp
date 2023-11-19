#include <iostream>
#include <cmath>

bool isNarcissistic(int number)
{
    int originalNumber = number;
    int numDigits = log10(number) + 1;
    int sum = 0;

    while (number > 0)
    {
        int digit = number % 10;
        sum += pow(digit, numDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

void findNarcissisticNumbers(int arr[], const int &size)
{
    for (int i = 0; i < size; ++i)
    {
        if (isNarcissistic(arr[i]))
        {
            std::cout << arr[i] << " ";
        }
    }
    std::cout << std::endl;
}

int main()
{
    int sequence[] = {1, 153, 370, 371, 407};
    int size = sizeof(sequence) / sizeof(sequence[0]);

    findNarcissisticNumbers(sequence, size);
    return 0;
}
