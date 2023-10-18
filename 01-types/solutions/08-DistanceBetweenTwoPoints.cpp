#include <iostream>
#include <cmath>

int main()
{
    double x1, y1,
        x2 = 0, y2 = 0;

    std::cin >> x1 >> y2;

    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    std::cout << distance << std::endl;

    return 0;
}
