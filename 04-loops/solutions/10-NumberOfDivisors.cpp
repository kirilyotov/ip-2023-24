#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int count = 1;
    for (int i = 2; i <= N; ++i)
    {
        if (N % i == 0)
        {
            ++count;
        }
    }
    std::cout << count << std::endl;
    return 0;
}
