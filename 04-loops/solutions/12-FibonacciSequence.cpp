#include <iostream>

int main()
{
    int N;
    std::cin >> N;
    int curr = 0, next = 1;
    for (int i = 0; i < N; ++i)
    {
        std::cout << curr << " ";
        int temp = next;
        next += curr;
        curr = temp;
    }
    std::cout << std::endl;
    return 0;
}
