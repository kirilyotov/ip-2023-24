#include <iostream>

short countTrailingZeros(int n) {
    short count = 0;
    while ((n & 1) == 0 && n != 0) {
        count++;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;
    std::cout << countTrailingZeros(n) << std::endl;
    return 0;
}
