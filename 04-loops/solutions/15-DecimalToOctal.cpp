#include <iostream>

int main()
{
    int decimal;
    std::cin >> decimal;

    int octal = 0;
    int base = 1;
    while (decimal > 0)
    {
        octal += (decimal % 8) * base;
        decimal /= 8;
        base *= 10;
    }

    std::cout << octal << std::endl;
    return 0;
}