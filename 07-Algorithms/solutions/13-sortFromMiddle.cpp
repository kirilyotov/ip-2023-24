#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void sortFromMiddle(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (abs(n / 2 - i) < abs(n / 2 - j)) {
                if (arr[i] < arr[j]) {
                    swap(arr[i], arr[j]);
                }
            } else if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
}

int main() {
    const int SIZE = 9;
    int arr[SIZE] = {1, 4, 2, 9, 7, 5, 3, 6, 8};

    sortFromMiddle(arr, SIZE);
    for (int i = 0; i < SIZE; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
