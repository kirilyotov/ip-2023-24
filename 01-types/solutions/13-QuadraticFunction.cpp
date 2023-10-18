#include <iostream>
#include <cmath>

int main()
{
    double a, b, c;
    std::cin >> a >> b >> c;

    // we assume the values of a, b and c are such that the descriminant is non negative
    // it'd be best if we checked it, but we'll be doing that next time
    double sqrtDiscriminant = std::sqrt( b * b - 4 * a * c );

    double x1 = (-b + sqrtDiscriminant) / (2 * a);
    double x2 = (-b - sqrtDiscriminant) / (2 * a);

    std::cout << "x1: " << x1 << std::endl;
    std::cout << "x2: " << x2 << std::endl;

    return 0;
}
