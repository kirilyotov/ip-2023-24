#include <iostream>

bool isPalindrome(long long n) {
    if (n < 0) return false;
    long long reversed = 0, original = n;

    while (n != 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    return original == reversed;
}

int main() {
    long long n;
    std::cin >> n;

    std::cout << "Number is ";
    
    if(!isPalindrome(n)){
        std::cout << "not";
    }

    std::cout <<" palindrome" << std::endl;
    return 0;
}
