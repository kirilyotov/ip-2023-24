#include <iostream>

int main()
{
    int a, b,
        result;

    std::cout << "Enter numbers :";
    std::cin >> a >> b;

    if (b == 0)
    {
        std::cout << "Divide by 0 not allowed";
        return 1;
    }

    std::cout << "Integer part of number:" << a / b << std::endl;
    std::cout << "Fraction of number: " << a % b << std::endl;

    return 0;
}