#include <iostream>
#include <cmath>

int main()
{
    float x, y, r;

    std::cin >> x >> y >> r;

    float distance = std::sqrt( (x*x) + (y*y) );

    const float EPS = 0.0001;
    bool bOnCircle = std::abs(distance - r) < EPS;

    std::cout << bOnCircle;

    return 0;
}
