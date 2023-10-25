#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int num;

    cout << "Enter number: ";
    cin >> num;

    cout << "Number is even: " << ((num & 1) == 0);

    return 0;
}
