#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;

    // standard swap with an additional variable
    int temp = a;
    a = b;
    b = temp;

    // without an additional variable
    //a = a + b;
    //b = a - b;
    //a = a - b;

    std::cout << "a: " << a << " b: " << b << std::endl;

    return 0;
}