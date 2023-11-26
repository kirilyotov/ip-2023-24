#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void deleteElement(int arr[], int &outLength, int index) {
    if (index >= outLength) return; // Invalid index
    for (int i = index; i < outLength - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    arr[outLength - 1] = -1;
    outLength--;
}

int main() {
    int const MAX_SIZE = 100;
    int length = 5;
    int arr[MAX_SIZE] = {3, 7, 23, 5, 1};

    int index = 2; 
    deleteElement(arr, length, index);

    for (int i = 0; i < length; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
