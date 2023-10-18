#include <iostream>

int main()
{
    int number;

    std::cin >> number;

    int ones = number % 10;
    int tens = (number / 10) % 10;
    //int hundreds = (number / 100) % 10;
    int thousands = (number / 1000) % 10;
    int tenThousands = (number / 10000) % 10;

    std:: cout << (ones == tenThousands && tens == thousands);

    return 0;
}
