#include <iostream>

int main() {
    double x;
    std::cin >> x;

    double sum = 1.0; 
    double term = 1.0;

    for (int i = 1; i <= 10; ++i) { 
        term *= x / i;
        sum += term;
    }

    std::cout << sum << std::endl;
    return 0;
}