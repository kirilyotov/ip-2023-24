#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int num1, num2;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    unsigned int bitwiseOr = num1 | num2;
    cout << "Bitwise or: " << bitwiseOr << endl;

    return 0;
}
