#include<iostream>

short max(short a, short b) {
    if(a >= b) {
        return a;
    } 

    return b;
}

short findMaxDigit(int x) {
    short a = 0;
    short currentDigit;
    while(x > 0) {
        currentDigit = x % 10;
        x /= 10;
        a = max(a, currentDigit);
    }
    return a;
}

int main() {
    int x;
    std::cin >> x;

    std::cout << findMaxDigit(x);
    return 0;
}