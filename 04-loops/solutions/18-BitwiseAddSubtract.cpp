#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    // Bitwise addition
    while (b != 0)
    {
        unsigned carry = a & b;
        a = a ^ b;
        b = carry << 1;
    }
    std::cout << "Sum: " << a << std::endl;

    // Reset a and b
    std::cin >> a >> b;

    // Bitwise subtraction
    while (b != 0)
    {
        unsigned borrow = (~a) & b;
        a = a ^ b;
        b = borrow << 1;
    }
    std::cout << "Difference: " << a << std::endl;

    return 0;
}
