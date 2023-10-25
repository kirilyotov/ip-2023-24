#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    unsigned int A, B, C;
    short n1, n2, n3;

    cout << "Enter A: ";
    cin >> A;
    cout << "Enter three positions (n1, n2, n3) in the range [0, 31]: ";
    cin >> n1 >> n2 >> n3;

    B = A | (1 << n1) | (1 << n2) | (1 << n3);
    C = B * A;
    int result = ~C ^ A;

    cout << "Result: " << result << endl;

    return 0;
}
