#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    while (N != 1)
    {
        std::cout << N << " ";
        if (N % 2 == 0)
        {
            N /= 2;
        }
        else
        {
            N = N * 3 + 1;
        }
    }
    std::cout << N << std::endl;
    return 0;
}
