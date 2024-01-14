#include <iostream>

void printCombination(int arr[], int n, int k, int data[], int index, int i) {
    if (index == k) {
        for (int j = 0; j < k; j++)
            std::cout << data[j] << " ";
        std::cout << std::endl;
        return;
    }

    if (i >= n) return;

    data[index] = arr[i];
    printCombination(arr, n, k, data, index + 1, i + 1);
    printCombination(arr, n, k, data, index, i + 1);
}

void combinations(int arr[], int n, int k,int data[]) {
    printCombination(arr, n, k, data, 0, 0);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 3;
    int data[3];
    combinations(arr, 5, k, data);
    return 0;
}