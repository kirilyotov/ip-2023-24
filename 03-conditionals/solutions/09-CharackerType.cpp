#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    
    char ch;
    cout << "Enter a single character: ";
    cin >> ch;

    if('a' <= ch  && ch <= 'z'){
        cout << "Lowercase" << endl;
    }
    else if('A' <= ch  && ch <= 'Z'){
        cout << "Uppercase" << endl;
    }
    else if('0' <= ch  && ch <= '9'){
        cout << "Digit" << endl;
    }
    else
        cout << "Other symbol" << endl;
    

    return 0;
}