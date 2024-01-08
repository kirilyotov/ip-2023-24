#include <iostream>

void readArray(int arr[], int &n, int &rot)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }
    std::cin >> rot;
}

void reverseArr(int arr[], int startIdx, int endIdx)
{
    for(; startIdx < endIdx; startIdx++,endIdx--)
    {
        std::swap(arr[startIdx],arr[endIdx]);
    }
}

void rotateArray(int arr[], int size, int rot)
{
    rot = rot < 0 ? size - (-rot % size) : rot % size;

    reverseArr(arr, 0, size - rot - 1);
    reverseArr(arr, size - rot,size - 1);
        
    reverseArr(arr, 0, size - 1);
}

void printArray(const int arr[], const int &n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    int n, rot;
    int arr[100];

    readArray(arr, n, rot);
    rotateArray(arr, n, rot);
    printArray(arr, n);

    return 0;
}
