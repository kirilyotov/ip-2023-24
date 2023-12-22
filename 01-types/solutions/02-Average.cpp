#include <iostream>

int main()
{
    int a, b, c;
    float average;
    std::cout << "Enter numbers: \n";

    std::cin >> a >> b >> c;

    average = (a + b + c) / 3.0;

    std::cout << "Average = " << average << std::endl;

    return 0;
}