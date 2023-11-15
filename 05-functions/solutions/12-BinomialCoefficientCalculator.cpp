#include <iostream>

long long binomialCoefficient(int n, int k) {
    long long result = 1;
    if (k > n - k) k = n - k;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

int main() {
    int n, k;
    std::cin >> n >> k;
    
    std::cout << binomialCoefficient(n, k) << std::endl;
    return 0;
}
