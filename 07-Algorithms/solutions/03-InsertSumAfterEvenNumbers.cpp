#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void insertSumAfterEvens(int arr[], int &n) {
    int oddSum = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] % 2 != 0) {
            oddSum += arr[i];
        } else {
            for (int j = n; j > i + 1; --j) {
                arr[j] = arr[j - 1];
            }
            arr[i + 1] = oddSum;
            ++i; 
            ++n; 
        }
    }
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5};
    int n = 5;
    insertSumAfterEvens(arr, n);
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
