#include <iostream>

int main() {
    double amountInBGN;
    
    std::cout << "Enter an amount (in BGN): ";
    std::cin >> amountInBGN;

    const double usdRate = 1.71;
    const double eurRate = 1.96;
    const double jpyRate = 0.016;

    double amountInUSD = amountInBGN / usdRate;
    double amountInEUR = amountInBGN / eurRate;
    double amountInJPY = amountInBGN / jpyRate;

    std::cout << "Amount USD: $" << amountInUSD << std::endl;
    std::cout << "Amount in EUR: €" << amountInEUR << std::endl;
    std::cout << "Amount in JPY: ¥" << amountInJPY << std::endl;

    return 0;
}
