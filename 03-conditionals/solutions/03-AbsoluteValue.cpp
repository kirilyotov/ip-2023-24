#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    int absolute = (number >= 0) ? number : -number;
    cout << "The absolute value is " << absolute << endl;

    return 0;
}