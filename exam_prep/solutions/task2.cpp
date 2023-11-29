#include <iostream>

unsigned countNumbers(int from, int to)
{
    unsigned cnt = 0;
    for (int i = from; i < to; i++)
    {
        // For each number calculate sum and product of its digits
        int sum = 0;
        int product = 1;
        int number = i;
        while ( number > 0 )
        {
            int digit = number % 10;
            sum += digit;
            product *= digit;
            number /= 10;
        }

        if ( sum == product )
            cnt++;
    }
    return cnt;
}

int main()
{
    int A, B;
    std::cin >> A >> B;
    std::cout << countNumbers( A, B ) << '\n';

    return 0;
}
