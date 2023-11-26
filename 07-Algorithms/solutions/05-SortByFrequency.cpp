#include <iostream>
using std::cin;
using std::cout;
using std::endl;

void sortByFrequency(int arr[], int size) {
    int frequency[101] = {0};
    for (int i = 0; i < size; ++i) {
        frequency[arr[i]]++;
    }

    for (int i = 0; i < 101; ++i) {
        while (frequency[i]--) {
            cout << i << " ";
        }
    }
    cout << endl;
}

int main() {
    const int SIZE = 10;
    int arr[SIZE] = {1, 4, 2, 4, 3, 4, 1, 1, 4, 3};
  
    sortByFrequency(arr, SIZE);
    return 0;
}
