#include <iostream>

int main()
{
    int n;

    std::cout << "Enter number: ";
    std::cin >> n;

    if( n == 1 )
       std::cout << '#';
    else if(n > 1)
    {
        for (int i = 0; i < n; ++i)
        {
            std::cout << '#';
        }
        std::cout << '\n';

        for (int i = 1; i < n-1; ++i)
        {
            std::cout << '#';

            for (int j = 1; j < n-1; ++j)
            {
                std::cout << ' ';
            }

            std::cout << "#\n";
        }

        for (int i = 0; i < n; ++i)
        {
            std::cout << '#';
        }
    }
    
    return 0;
}