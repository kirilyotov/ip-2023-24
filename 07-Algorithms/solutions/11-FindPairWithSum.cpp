#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool findPairWithSum(int arr[], int n, int sum) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (arr[i] + arr[j] == sum) {
                cout << "Pair found: (" << arr[i] << ", " << arr[j] << ")" << endl;
                return true;
            }
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sum = 7;
    if (!findPairWithSum(arr, n, sum)) {
        cout << "No pair found with sum " << sum << endl;
    }
    return 0;
}
