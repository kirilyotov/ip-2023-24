#include <iostream>
using namespace std;

void longestIncreasingSubsequence(const int arr[], const int &size, int &startIndex, int &max)
{
    int length = 1;
    for (int i = 0; i < size; ++i)
    {
        if (arr[i] < arr[i + 1])
        {
            ++length;
        }
        else
        {
            if (length > max)
            {
                max = length;
                startIndex = i - length + 1;
            }
            length = 1;
        }
    }
}

int main()
{
    int startIndex = 0;
    int length = 0;
    int array[] = {10, 9, 10, 33, 21, 50, 41, 60};

    int size = sizeof(array) / sizeof(array[0]);

    longestIncreasingSubsequence(array, size, startIndex, length);
    std::cout << "Length of the longest increasing subsequence is " << length
              << " and starts from index " << startIndex << " in array" << std::endl;

    return 0;
}
