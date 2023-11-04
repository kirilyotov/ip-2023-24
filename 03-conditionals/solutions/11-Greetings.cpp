#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int hour, minute;
    char delim;
    cin >> hour >> delim >> minute;

    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        cout << "Wrong time!" << endl;
    } else if (hour >= 5 && hour < 12) {
        cout << "Good morning!" << endl;
    } else if (hour >= 12 && hour < 17) {
        cout << "Good day!" << endl;
    } else if (hour >= 17 && hour < 22) {
        cout << "Good evening!" << endl;
    } else {
        cout << "Good night!" << endl;
    }

    return 0;
}
