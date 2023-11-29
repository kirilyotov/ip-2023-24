#include <iostream>

bool areEqual(float num1, float num2)
{
    const float eps = 0.001;
    return std::abs(num1 - num2) < eps;
}

float slope(float x1, float y1, float x2, float y2)
{
    return (y2-y1)/(x2-x1);
}

bool areCollinear(float x1, float y1, float x2, float y2, float x3, float y3)
{
    return areEqual( slope(x1, y1, x2, y2), slope(x2, y2, x3, y3) );
}

int main()
{
    std::cout << areCollinear( 1.5, 1.5, 2.2, 2.2, 3.5, 3.5 ) << '\n';
    std::cout << areCollinear( 1, 1, 2, 2, 2, 5 ) << '\n';

    return 0;
}
