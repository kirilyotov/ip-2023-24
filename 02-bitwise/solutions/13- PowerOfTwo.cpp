#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int num;

    cout << "Enter a number: ";
    cin >> num;

    if ((num & (num - 1)) == 0)
    {
        cout << num << " is a power of two." << endl;
    }
    else
    {
        cout << num << " is not a power of two." << endl;
    }

    return 0;
}
