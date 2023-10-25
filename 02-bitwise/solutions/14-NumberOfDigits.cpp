#include <iostream>
#include <cmath>

using std::cin, std::cout, std::endl;

int main() {
    int number;

    cout << "Enter number: ";
    cin >> number;

    int digitCount = (int)(log10(std::abs(number))) + 1;
    cout << "Number of digits: " << digitCount << endl;

    return 0;
}
