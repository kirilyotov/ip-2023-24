#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int num;
    short bitToSet;
    cout << "Enter number: ";

    cin >> num;
    cout << "Enter bit to set: ";
    cin >> bitToSet;

    num |= (1 << bitToSet);

    // Note: the (1 << bitToSet)
    // results in a mask of the type
    //  ...0000010000...
    // this allows the | operator to flip
    // the bit to 1 where the 1 is located

    cout << "Result: " << num << endl;

    return 0;
}
