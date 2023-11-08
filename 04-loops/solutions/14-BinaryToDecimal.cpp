#include <iostream>

int main()
{
    long long binary;
    int decimal = 0, base = 1;

    std::cin >> binary;

    while (binary > 0)
    {

        int lastDigit = binary % 10;

        if (lastDigit > 1)
        {
            std::cout << "Not a binary number!" << std::endl;
            return 1;
        }

        binary = binary / 10;
        decimal += lastDigit * base;
        base = base * 2;
    }

    std::cout << decimal << std::endl;
    return 0;
}
