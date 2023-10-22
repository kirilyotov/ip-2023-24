#include <iostream>
#include <cmath>

int main()
{
    double x1, y1, x2, y2, x3, y3, x4, y4;

    std::cout << "Point 1 (x1 y1): ";
    std::cin >> x1 >> y1;

    std::cout << "Point 2 (x2 y2): ";
    std::cin >> x2 >> y2;

    std::cout << "Point 3 (x3 y3): ";
    std::cin >> x3 >> y3;

    std::cout << "Point 4 (x4 y4): ";
    std::cin >> x4 >> y4;

    double area = 0.5 * std::abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2) + x1 * (y3 - y4) + x3 * (y4 - y1) + x4 * (y1 - y3));

    std::cout << "Area =  " << area << std::endl;

    return 0;
}
