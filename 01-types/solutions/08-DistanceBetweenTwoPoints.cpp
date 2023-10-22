#include <iostream>
#include <cmath>

int main()
{
    float x, y;

    std::cin >> x >> y;

    float distance = std::sqrt( (x*x) + (y*y) );

    std::cout << distance << std::endl;

    return 0;
}
