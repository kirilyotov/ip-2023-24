#include <iostream>
#include <cmath>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int number;

    cout << "Enter a number: ";
    cin >> number;

    int closestPower = (number == 0) ? 1 : (int)(std::pow(2, std::ceil(std::log2(number + 1))));

    cout << "The closest power of 2 greater than " << number << " is: " << closestPower << endl;

    return 0;
}
