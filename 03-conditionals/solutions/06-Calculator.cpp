#include <iostream>

using std::cin, std::cout, std::endl;


int main() {
    char op;
    double a, b;
    cout << "Enter an operator (+, -, *, /) followed by two numbers: ";
    cin >> op >> a >> b;

    switch (op) {
        case '+':
            std::cout << "Result: " << a + b << endl;
             break;

        case '-':
            std::cout << "Result: " << a - b << endl;
             break;

        case '*': 
            std::cout << "Result: " << a * b << endl;
             break;

        case '/': 
            if (b != 0)
                std::cout << "Result: " << a / b << endl; 
            else
                cout << "Cannot divide by zero." << endl;
            break;
            
        default: cout << "Invalid operator" << endl;
    }

    return 0;
}