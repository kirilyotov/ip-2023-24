#include <iostream>

int findLastOccurrence(int arr[], int n, int x) {
    int index = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            index = i;
        }
    }
    return index;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 3, 6};
    int x = 3;
    int n = sizeof(arr)/sizeof(arr[0]);
    std::cout << "Last occurrence of " << x << " is at index " << findLastOccurrence(arr, n, x) << std::endl;
    return 0;
}
