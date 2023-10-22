#include <iostream>
#include <cmath>

int main()
{
    int a, q, n;
    std::cin >> a >> q >> n; 

    double result = a * std::pow(q, n - 1);

    std::cout << result << std::endl;

    return 0;
}