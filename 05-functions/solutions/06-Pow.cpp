#include <iostream>
#include <cmath>

double myPow(double base, int exp) {
    double result = 1.0;
    bool isNegative = exp < 0;
    exp = std::abs(exp);

    while (exp > 0) {
        if (exp % 2 == 1) {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }

    if (isNegative) {
        result =  1.0 / result;
    }

    return result;
}

int main() {
    double base;
    int exp;

    std::cin >> base >> exp;
    std::cout << myPow(base, exp) << std::endl;
    
    return 0;
}