#include <iostream>

int countBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main() {
    int n;
    std::cin >> n;

    std::cout << countBits(n) << std::endl;


    return 0;
}