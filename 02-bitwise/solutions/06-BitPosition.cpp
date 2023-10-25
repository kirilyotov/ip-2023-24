#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int num;

    cout << "Enter number: ";
    cin >> num;

    // Note: Converting anything else other than 0
    // to a bool will result in a 'true'
    bool firstBit = num & 1;
    bool lastBit = num & (1 << 31);

    // Note: Here 31 is a magic number, but for simplicity and
    // because we know int is 32bit, we hardcoded it
    //
    // For the curious we can measure the type's number of bits like so:
    //  short bitsCnt = sizeof(num) * 8;
    // here sizeof(...) gives us the number of bytes a variable (type) takes in memory
    // and 8 is the number of bits in a byte (known constant)

    unsigned short n;
    cout << "n: ";
    cin >> n;
    bool NthBit = num & (1 << n);

    cout << "first bit: " << firstBit << endl;
    cout << "last bit: " << lastBit << endl;
    cout << "N-th bit: " << NthBit << endl;

    return 0;
}
