#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int guessNumber(int lower, int upper) {
    char response;
    while (lower <= upper) {
        int mid = lower + (upper - lower) / 2;
        cout << "Is your number " << mid << "? (Enter 'h' for higher, 'l' for lower, 'y' for yes): ";
        cin >> response;

        if (response == 'y') {
            return mid;
        } else if (response == 'l') {
            upper = mid - 1;
        } else if (response == 'h') {
            lower = mid + 1;
        }
    }
    return -1; 
}

int main() {
    int lower = 1, upper = 100;
    cout << "Think of a number between " << lower << " and " << upper << endl;
    int guessedNumber = guessNumber(lower, upper);
    if (guessedNumber != -1) {
        cout << "Your number is " << guessedNumber << endl;
    } else {
        cout << "Invalid input." << endl;
    }
    return 0;
}
