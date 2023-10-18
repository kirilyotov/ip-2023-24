#include <iostream>

int main()
{
    char one = '1',
         nine = '9',
         b = 'b',
         zero = '0';

    std::cout << " _______________________________\n";
    std::cout << "|\tchar\t|\tinteger\t|\n";
    std::cout << "|\t" << one << "\t|\t" << (int)one << " \t|\n";
    std::cout << "|\t" << nine << "\t|\t" << (int)nine << " \t|\n";
    std::cout << "|\t" << b << "\t|\t" << (int)b << " \t|\n";
    std::cout << "|\t" << zero << "\t|\t" << (int)zero << " \t|\n";
    std::cout << "|_______________|_______________|\n";

    return 0;
}