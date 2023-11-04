#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    
    cout << (number % 2 == 0 ? "even" : "odd") << endl;

    return 0;
}