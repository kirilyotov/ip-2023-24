#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int num;

    cout << "Enter number: ";
    cin >> num;

    unsigned int bitwiseNot = ~num;
    cout << "Bitwise not: " << bitwiseNot << endl;

    return 0;
}
