#include <iostream>

int main()
{
    unsigned int number;
    std::cin >> number;
    int count = 0;
    while (number > 0)
    {
        if (number % 2 == 0)
        {
            count++;
            number /= 2;
        }
        else
        {
            break;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
