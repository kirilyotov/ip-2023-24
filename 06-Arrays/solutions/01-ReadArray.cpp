#include <iostream>

int main()
{
    const int MAX = 127;

    int N;
    std::cin >> N;

    if (N < 1 || N > MAX)
    {
        std::cout << "Invalid input" << std::endl;
        return 1;
    }

    int arr[MAX];

    for (int i = 0; i < N; ++i)
    {
        std::cin >> arr[i];
    }

    for (int i = 0; i < N; ++i)
    {
        std::cout << arr[i] << " ";
    }

    return 0;
}