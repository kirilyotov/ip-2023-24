#include <iostream>

int main()
{
    int a, b;
    std::cin >> a >> b;
    bool found = false;

    for (int tempA = a; tempA > 0 && !found; tempA /= 10)
    {
        if (tempA % b == 0)
        {
            found = true;
        }
    }

    std::cout << (found ? "true" : "false") << std::endl;

    return 0;
}
