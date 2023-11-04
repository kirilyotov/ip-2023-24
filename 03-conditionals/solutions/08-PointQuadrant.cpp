#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    const float EPS = 0.00001; 

    int x, y;
    cout << "Enter the coordinates of the point (x y): ";
    cin >> x >> y;

    bool isOnАbscissa = fabs(x) < EPS;
    bool isOnOrdinate = fabs(y) < EPS;

    if (isOnАbscissa && isOnOrdinate) {
        cout << "The point is at the origin." << endl;
    } else if (isOnАbscissa) {
        cout << "The point is on the X axis." << endl;
    } else if (isOnOrdinate) {
        cout << "The point is on the Y axis." << endl;
    } else if (x > 0 && y > 0) {
        cout << "The point is in the first quadrant." << endl;
    } else if (x < 0 && y > 0) {
        cout << "The point is in the second quadrant." << endl;
    } else if (x < 0 && y < 0) {
        cout << "The point is in the third quadrant." << endl;
    } else if (x > 0 && y < 0) {
        cout << "The point is in the fourth quadrant." << endl;
    }

    return 0;
}
