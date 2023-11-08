#include <iostream>
#include <cmath>

int main()
{
    int a, b;
    std::cin >> a >> b;

    int diff = std::abs(a - b);

    for (int i = 2; i <= diff / 2; i++)
    {
        bool is_prime_i = true, is_prime_diff_i = true;

        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                is_prime_i = false;
                break;
            }
        }

        for (int j = 2; j * j <= diff - i; j++)
        {
            if ((diff - i) % j == 0)
            {
                is_prime_diff_i = false;
                break;
            }
        }

        if (is_prime_i && is_prime_diff_i)
        {
            std::cout << "Yes: " << i << " + " << diff - i << std::endl;
            return 0;
        }
    }

    std::cout << "No such primes found." << std::endl;
    return 0;
}
