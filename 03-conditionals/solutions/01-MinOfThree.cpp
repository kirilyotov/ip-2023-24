#include <iostream>

using std::cin, std::cout, std::endl;

int main() {
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if(a > b){
        a = b;
    }
    if (a > c){
        a = c;
    }

    cout << "The smallest number is " << a << endl;

    /*
    * Ternary operator
    */ 
    
    // int min = (a < b) ? (a < c ? a : c) : (b < c ? b : c);
    
    /*
    * If else solution
    */ 
    // int min = 0;

    // if( a < b && a < c){
    //     min = a;
    // }
    // else if(b < c){
    //     min = b;
    // }
    // else{
    //     min = c;
    // }

    // cout << "The smallest number is " << min << endl;

    return 0;
}
