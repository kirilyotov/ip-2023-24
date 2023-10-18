#include <iostream>

int main()
{
    int a, b,
        result;

    std::cout << "Enter numbers :";
    std::cin >> a >> b;

    result = a - b;
    std::cout << a << " - " << b << " = " << result << std::endl;

    return 0;
}