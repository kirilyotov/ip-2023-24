#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int num;
    short bitToFlip;

    cout << "Enter number: ";
    cin >> num;

    cout << "Enter bit to flip: ";
    cin >> bitToFlip;

    num ^= (1 << bitToFlip);

    // Note: the (1 << bitToFlip)
    // results in a mask of the type
    //  ...0000010000...
    // this allows the ^ operator to flip
    // the bit from 0 to 1 or from 1 to 0
    // where the 1 is located
    // Note: Check out how the XOR operator
    // works, if you are confused

    cout << "Result: " << num << endl;

    return 0;
}
