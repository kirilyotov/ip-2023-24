#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int a = 0, b = 1, c;
    for (int i = 0; i < N; ++i)
    {
        if (i <= 1)
        {
            c = i;
        }
        else
        {
            c = a + b;
            a = b;
            b = c;
        }
        std::cout << c << " ";
    }
    std::cout << std::endl;
    return 0;
}
