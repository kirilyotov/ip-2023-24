#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void findLongestSequence(int arr[], int length) {
    int maxLength = 1, currentLength = 1;
    int start = 0, currentStart = 0;
    for (int i = 1; i < length; ++i) {
        if (arr[i] == arr[i - 1]) {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                start = currentStart;
            }
            currentLength = 1;
            currentStart = i;
        }
    }

    // Check last sequence
    if (currentLength > maxLength) {
        maxLength = currentLength;
        start = currentStart;
    }

    cout << "Longest sequence starts at index " << start << " with length " << maxLength << endl;
}

int main() {
    int arr[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    findLongestSequence(arr, n);
    return 0;
}
