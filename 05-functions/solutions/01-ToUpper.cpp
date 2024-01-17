#include <iostream>

using std::cout;
using std::cin;
using std::endl;

char toUpperCase(char letter) {
    if (letter >= 'a' && letter <= 'z') {
        short dist = letter - 'a';
        return 'A' + dist;
    }
    return letter;
}

char toLowerCase(char letter) {
    if (letter >= 'A' && letter <= 'Z') {
        short dist = letter - 'A';
        return 'a' + dist;
    }
    return letter;
}

int main () {
    char a;
    cin >> a;

    cout << toUpperCase(a) << endl;
    cout << toLowerCase(a) << endl;

    return 0;
}