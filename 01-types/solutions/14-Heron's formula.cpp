#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;

    std::cin >> a >> b >> c;

    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    std::cout << "S = " << area << std::endl;
    
    return 0;
}
