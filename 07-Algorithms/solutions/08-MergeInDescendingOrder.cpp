#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void mergeInDescendingOrder(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < n1 && j < n2) {
        if (arr1[i] > arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n1) {
        merged[k++] = arr1[i++];
    }

    while (j < n2) {
        merged[k++] = arr2[j++];
    }
}

int main() {
    const int SIZE = 5;
    int arr1[SIZE] = {9, 7, 5, 3, 1};
    int arr2[SIZE] = {8, 6, 4, 2, 0};

    int merged[2 * SIZE];
    mergeInDescendingOrder(arr1, SIZE, arr2, SIZE, merged);
    
    for (int i = 0; i < 2 * SIZE; ++i) {
        cout << merged[i] << " ";
    }
    cout << endl;
    return 0;
}
