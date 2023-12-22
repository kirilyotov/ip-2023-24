#include <iostream>


int swapBits(int n, short i, short j) {
    if (((n >> i) & 1) != ((n >> j) & 1)) {
        n ^= (1 << i) | (1 << j);
    }
    return n;
}


int swapEveryTwoBits(int n) {
    for (short i = 0; i < sizeof(n) * 8 - 1; i += 2) {
        n = swapBits(n, i, i + 1);
    }
    return n;
}

int main() {
    int n;
    std::cin >> n;
    
    std::cout << swapEveryTwoBits(n) << std::endl;

    return 0;
}