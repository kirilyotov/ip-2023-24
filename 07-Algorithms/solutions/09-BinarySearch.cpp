#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool binarySearch(int arr[], int n, int x) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == x) {
            return true;
        } else if (arr[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 5;
    if (binarySearch(arr, n, x)) {
        cout << x << " is in the array." << endl;
    } else {
        cout << x << " is not in the array." << endl;
    }
    return 0;
}
