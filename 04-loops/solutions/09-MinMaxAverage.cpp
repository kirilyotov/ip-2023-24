#include <iostream>
#include <limits>
#include <sstream>

int main()
{
    int min = INT32_MAX;
    int max = INT32_MIN;

    int sum = 0;
    int count = 0;
    int number;
    char separator;

    while (std::cin >> number >> separator)
    {
        sum += number;
        count++;
        if (number < min)
            min = number;
        if (number > max)
            max = number;

        if (separator == ';')
            break;
    }

    double average = (double)(sum) / count;

    std::cout << "Min: " << min << std::endl;
    std::cout << "Max: " << max << std::endl;
    std::cout << "Average: " << average << std::endl;

    return 0;
}
