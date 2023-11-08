#include <iostream>
#include <cmath>

bool isPrime(int n)
{

    return true;
}

int main()
{
    int number;
    std::cin >> number;

    bool isPrime = true;

    if (number <= 1)
    {
        isPrime = false;
    }
    else if (number > 3 && (number % 2 == 0 || number % 3 == 0))
    {
        isPrime = false;
    }
    else
    {
        for (int i = 5; i <= std::sqrt(number); i += 6)
        {
            if (number % i == 0 || number % (i + 2) == 0)
            {
                isPrime = false;
                break;
            }
        }
    }

    std::cout << (isPrime ? "true" : "false") << std::endl;

    return 0;
}
