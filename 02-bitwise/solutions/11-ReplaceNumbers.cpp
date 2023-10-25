#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    int a, b;
    cout << "Enter numbers: ";
    cin >> a >> b;

    a ^= b;
    b ^= a;
    a ^= b;

    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}