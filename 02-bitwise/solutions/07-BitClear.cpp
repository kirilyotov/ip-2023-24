#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int num;
    short bitToClear;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter bit to clear: ";

    cin >> bitToClear;
    num &= ~(1 << bitToClear);

    // Note: the ~(1 << bitToClear)
    // results in a mask of the type
    //  ...1111101111...
    // this allows the & operator to flip
    // the bit to 0 where the 0 is located

    cout << "result: " << num << endl;

    return 0;
}
