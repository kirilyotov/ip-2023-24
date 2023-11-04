#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int month;
    cout << "Enter a month number (1-12): ";
    cin >> month;

    switch (month) {
        case 1: 
        case 3: 
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31" << endl;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30" << endl;
            break;
        case 2:
            cout << "God knows ¯\\_(ツ)_/¯" << endl;
            break;
        default:
            cout << "Invalid month" << endl;
    }

    return 0;
}
