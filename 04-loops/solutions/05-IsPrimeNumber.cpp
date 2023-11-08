#include <iostream>
#include <cmath>

int main()
{
    int number;
    std::cin >> number;

    bool isPrime = true;

    if (number <= 1)
    {
        isPrime = false;
    }
    else if (number > 3)
    {
        if (number % 2 == 0 || number % 3 == 0)
        {
            isPrime = false;
        }
        else
        {
            int sqrtNum	= std::sqrt(number);
            for (int i = 5; i <= sqrtNum; i += 6)
            {
                if (number % i == 0 || number % (i + 2) == 0)
                {
                    isPrime = false;
                    break;
                }
            }
        }
    }
    
    std::cout << (isPrime ? "true" : "false") << std::endl;

    return 0;
}
