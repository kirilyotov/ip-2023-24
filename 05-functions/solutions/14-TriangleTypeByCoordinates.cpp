#include <iostream>
#include <cmath>

const float EPS = 0.001f;

bool isEqual(double num1, double num2, double precision)
{   
    return abs(num1 - num2) < precision;
}

double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1)) + (y2 - y1)*(y2 - y1);
}

void triangleType(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    if( isEqual(a, 0, EPS) || isEqual(b, 0, EPS) || isEqual(c, 0, EPS) ||
        a + b < c || a + c < b || b + c < a ){
     std::cout << "Invalid";
    }
    else if (isEqual(a, b, EPS) && isEqual(b, c, EPS)){
     std::cout << "Equilateral";
    }
    else if (isEqual(a, b, EPS) || isEqual(b, c, EPS) || isEqual(c, a, EPS)){
    std::cout << "Isosceles";
    }
    else{
     std::cout << "Scalene";
    }
}

int main() {
    double x1, y1, x2, y2, x3, y3;
    std::cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    
    triangleType(x1, y1, x2, y2, x3, y3);
    
    return 0;
}
