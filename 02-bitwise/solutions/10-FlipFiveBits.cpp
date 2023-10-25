#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    // mask with the first five bits flipped up
    // Note: 0b means we're writing a binary number, not a decimal!
    const unsigned int BITMASK = 0b11111;
    unsigned int num;

    cout << "Enter number: ";
    cin >> num;

    num ^= BITMASK;

    cout << "result: " << num << endl;

    return 0;
}
