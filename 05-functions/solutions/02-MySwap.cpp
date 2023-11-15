#include<iostream>

void mySwap(int& a,int& b) {
    int c = a;
    a = b;
    b = c;
}

int main(){
    int a,b;

    std::cin >> a >> b;

    mySwap(a,b);
    std::cout << a << ' ' << b;
    
    return 0;
}