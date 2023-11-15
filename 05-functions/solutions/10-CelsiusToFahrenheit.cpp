#include <iostream>

double celsiusToFahrenheit(double celsius) {
    return celsius * 9.0 / 5.0 + 32;
}

int main() {
    double celsius;
    std::cin >> celsius;
    
    std::cout << celsiusToFahrenheit(celsius) << std::endl;

    return 0;
}
