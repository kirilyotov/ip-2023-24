
#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;

int readBinary(bool binary[], const int size) {
    unsigned N = 0;
    cout << "Enter binary number: ";
    cin >> N;
    if (N == 0 || N > size) {
        cout << "Invalid number!" << endl;
        return -1;
    }
    for(int i = 0; i < N; ++i) {
        cin >> binary[i];
    }
    return N;
}

int binaryToOctal(const bool binary[], int n) {
    int octal = 0, factor = 1;
    for (int i = n - 1; i >= 0; i -= 3) {
        
        // https://www.wikihow.com/Convert-Binary-to-Octal-Number
        int bit1 = 0, bit2 = 0, bit3 = 0;
        
        if(i - 2 >= 0) 
            bit1 = binary[i - 2];
        if(i - 1 >= 0)
             bit2 = binary[i - 1];

        int bit3 = binary[i];

        int sum = bit1 * 4 + bit2 * 2 + bit3;
        octal += sum * factor;
        factor *= 10;
    }
    return octal;
}

int main() {
    const int SIZE = 128;
    bool binary[SIZE] = {0};

    int length = readBinary(binary, SIZE);

    cout << "Octal: " << binaryToOctal(binary, length) << endl;
    return 0;
}
