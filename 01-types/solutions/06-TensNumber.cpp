#include <iostream>

int main()
{
    int number;
    std::cin >> number;
    std::cout << "tens: " << (number / 10) % 10 << "\n";

    return 0;
}