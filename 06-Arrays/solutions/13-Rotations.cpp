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

void rotateArray(int arr[], int n, int rot)
{
    if (rot > 0)
    {
        for (int r = 0; r < rot; r++)
        {
            int last = arr[n - 1];
            for (int i = n - 1; i > 0; i--)
            {
                arr[i] = arr[i - 1];
            }
            arr[0] = last;
        }
    }
    else
    {
        rot = std::abs(rot);
        for (int r = 0; r < rot; r++)
        {
            int first = arr[0];
            for (int i = 0; i < n - 1; i++)
            {
                arr[i] = arr[i + 1];
            }
            arr[n - 1] = first;
        }
    }
}

void reverseArr(int arr[], int startIdx, int endIdx)
{
    for(; startIdx < endIdx; startIdx++,endIdx--)
    {
        std::swap(arr[startIdx],arr[endIdx]);
    }
}

void quickRotateArray(int arr[], int size, int rot)
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
