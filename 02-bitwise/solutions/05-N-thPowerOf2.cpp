#include <iostream>

using std::cin, std::cout, std::endl;

int main()
{
    int N;
    cout << "Enter N [0-31]: ";

    cin >> N;

    if (N >= 0 && N <= 31)
    {
        unsigned int result = 1 << N;
        cout << "2^" << N << " = " << result << endl;
    }
    else
    {
        cout << "Not correct input!" << endl;
    }

    return 0;
}
