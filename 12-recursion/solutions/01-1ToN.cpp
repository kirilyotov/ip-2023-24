#include <iostream>

void printNTo1(int N)
{
    if (N == 0)
    {
        return;
    }

    std::cout << N << " ";
    printNTo1(--N);
}

void print1ToN(int N)
{
    if (N <= 0)
    {
        return;
    }

    print1ToN(N - 1);
    std::cout << N << " ";
}

unsigned factorial(unsigned N){
    if(N <= 1){
        return 1;
    }

    return N * factorial(N - 1);
}

int strlen(char* str){
    if(!str) return 0;

    return 1 + strlen(str + 1);
}

unsigned sumOfDigits(unsigned N){
    if(N == 0) return 0;

    return N % 10 + sumOfDigits(N / 10);
}

int maxNumberInArray(int* arr, int size){
    if(size < 0) return arr[size];

    return std::max(arr[size - 1], maxNumberInArray(arr, size - 1));
}

int main()
{
    std::cout << factorial(5) << " ";
    std::cout << "\n";
    printNTo1(5);
}