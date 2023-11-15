#include <iostream>
#include <cmath>

double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void triangleType(double x1, double y1, double x2, double y2, double x3, double y3) {
    double a = distance(x1, y1, x2, y2);
    double b = distance(x2, y2, x3, y3);
    double c = distance(x3, y3, x1, y1);

    if (a == b && b == c){
     std::cout << "Equilateral\n";
    }
    else if (a == b || b == c || c == a){
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
