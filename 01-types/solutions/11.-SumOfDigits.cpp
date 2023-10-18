#include <iostream>

int main() {
    int num;
    std::cin >> num;

    int thousands = num / 1000;
    int hundreds = (num / 100) % 10;
    int tens = (num / 10) % 10;
    int ones = num % 10;

    std::cout << ones + tens + hundreds + thousands << std::endl;

    return 0;
}
