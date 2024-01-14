#include <iostream>
#include <cmath>

using std::cin;
using std::cout;
using std::endl;

int main() {
    const float EPS = 0.00001;
    
    float x, y, side;
    cin >> x >> y >> side;

    float half_side = side / 2.0f;

    float fabsX = fabs(x);
    float fabsY = fabs(y);    

    bool isOnXSquareSide = fabs(fabsX - half_side) < EPS;
    bool isOnYSquareSide = fabs(fabsY - half_side) < EPS;

    bool isXCoordInRange = fabsX < half_side + EPS;
    bool isYCoordInRange = fabsY < half_side + EPS;
    
    if (isOnXSquareSide && isYCoordInRange || isOnYSquareSide && isXCoordInRange) {
        cout << "Point A(" << x << ", " << y << ") is ON the rectangle" << endl;
    }
    else if (fabsX < half_side && fabsY < half_side) {
        cout << "Point A(" << x << ", " << y << ") is INSIDE the rectangle" << endl;
    } else {
        cout << "Point A(" << x << ", " << y << ") is OUTSIDE the rectangle" << endl;
    }

    return 0;
}
