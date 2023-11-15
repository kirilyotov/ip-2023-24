#include <iostream>

long long binomialCoefficient(int n, int k) {
    long long result = 1;
    if (k > n - k) 
        k = n - k;
    for (int i = 0; i < k; ++i) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

void printPascalsTriangle(int rows) {
    for (int n = 0; n < rows; n++) {
        for (int k = 0; k <= n; k++) {
            std::cout << binomialCoefficient(n, k) << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cin >> n;
    printPascalsTriangle(n);
    
    return 0;
}
