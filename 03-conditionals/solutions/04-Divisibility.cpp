#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    bool by5 = number % 5 == 0;
    bool by3 = number % 3 == 0;

    if (by5 && by3)
        cout << number << " is divisible by 5 and 3." << endl;
    else if (by5)
        cout << number << " is divisible by 5." << endl;
    else if (by3)
        cout << number << " is divisible by 3." << endl;
    else
        cout << number << " is not divisible by 5 or 3." << endl;

    return 0;
}