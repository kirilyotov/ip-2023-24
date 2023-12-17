#include <iostream>
#include <cstdlib> 
#include <ctime>
using std::cout;
using std::endl;

// Task 1
/**
 * Finds the minimum element in an array.
 * 
 * @param arr Pointer to array.
 * @param size The number of elements in the array.
 * @return Pointer to the minimum element, or nullptr if the array is empty or null.
 */
int* findMinElement(int* arr, int size) {
    if (arr == nullptr || size <= 0) return nullptr;

    int* minElement = arr;
    for (int i = 1; i < size; ++i) {
        if (arr[i] < *minElement) {
            minElement = &arr[i];
        }
    }
    return minElement;
}

/**
 * Fills an array with random numbers within a specified range.
 *
 * @param arr Pointer to the array.
 * @param size The size of the array.
 * @param min The minimum value for the random numbers (inclusive).
 * @param max The maximum value for the random numbers (inclusive).
 */
void fillArrayWithRandomNumbers(int* const  arr, int size, int min, int max) {
    if (arr == nullptr || size <= 0) return;

    // srand(time(0));

    // Example how to retrieve a random number between 100 and 200
	// Offset = 100
	// Range = 200 - 100 + 1 // 101
	// random = 100 + (rand() % 101);

  
    for (int i = 0; i < size; i++) 
        arr[i] = min + rand() % (max - min + 1);
    
}

void printArray(const int* const arr, int size, int length){
    std::cout << "array size: " << size  << " array length: " << length<< endl;

    for(int i = 0; i < size; ++i){
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Task 2
/**
 * Finds the minimum element in an array.
 * 
 * @param arr Pointer to the start of the array.
 * @param size The number of elements in the array.
 * @return Pointer to the minimum element, or nullptr if the array is empty or null.
 */
int* createArray(int size) {
    if (size <= 0) return nullptr;
    return new (std::nothrow) int[size];
}

/**
 * Deletes a dynamically allocated array.
 *
 * @param arr Reference to the array pointer.
 */
void deleteArray(int*& arr) {
    delete[] arr;
    arr = nullptr; // Set the pointer to nullptr to avoid dangling pointer issues.
}

// Task 3
/**
 * Allocates memory for a 2D matrix.
 *
 * @param rows The number of rows in the matrix.
 * @param cols The number of columns in the matrix.
 * @return Pointer to the array of row pointers, or nullptr if rows or cols are non-positive.
 */
int** createMatrix(int rows, int cols) {
    if (rows <= 0 || cols <= 0) return nullptr;

    int** matrix = new (std::nothrow) int*[rows];
    for (int i = 0; i < rows; ++i) {
        matrix[i] = new int[cols];
    }
    return matrix;
}

/**
 * Fills matrix with random numbers within a specified range.
 *
 * @param arr Pointer to the array.
 * @param rows The rows of the array.
 * @param cols The columns of the array.
 * @param min The minimum value for the random numbers (inclusive).
 * @param max The maximum value for the random numbers (inclusive).
 */
void fillMatrixWithRandomNumbers(int** const  matrix, int rows, int cols, int min, int max) {
    if (matrix == nullptr || rows <= 0 || cols <= 0) return;
  
    for (int i = 0; i < rows; i++) 
        fillArrayWithRandomNumbers(matrix[i], cols, min, max);
}

void printMatrix(const int* const * const matrix, int rows, int cols) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

/**
 * Deletes a dynamically allocated 2D matrix.
 *
 * @param matrix Reference to the matrix pointer.
 * @param rows The number of rows in the matrix.
 */
void deleteMatrix(int**& matrix, int rows) {
    for (int i = 0; i < rows; ++i) {
        delete[] matrix[i]; // Delete each row.
    }
    delete[] matrix; // Delete the array of pointers.
    matrix = nullptr; // Set the pointer to nullptr to avoid dangling pointer issues.
}

// Task 4

/**
 * Copies the contents of one array to another.
 *
 * This function assumes that both the source ('from') and destination ('to')
 * arrays are already allocated and have at least 'size' elements.
 *
 * @param from Pointer to the source array.
 * @param to Pointer to the destination array.
 * @param size The number of elements to copy.
 */
void copyArray(int* from, int* to, int size){
    for (int i = 0; i < size; ++i) {
        to[i] = from[i];
    }
}

/**
 * Appends an element to the end of a dynamically allocated array.
 *
 * @param arr Reference to the array pointer.
 * @param intOutSize Reference to the size of the array.
 * @param intOutSize Reference to the length of the array.
 * @param element The element to append.
 */
void appendElement(int*& arr, int& intOutSize, int& inOutLength,  int element) {
    if(intOutSize + 1 > inOutLength)
    {
        int* temp = createArray(intOutSize + 1);
        copyArray(arr, temp, intOutSize);
        deleteArray(arr);
        
        arr = temp;
        ++inOutLength;
    }
    
    arr[intOutSize] = element;

    ++intOutSize;
}

// Task 5
/**
 * Inserts an element at a specified position in a dynamically allocated array.
 * Returns true on successful insertion or false if the position is invalid.
 *
 * @param arr Reference to the array pointer.
 * @param inOutSize Reference to the size of the array.
 * @param inOutLength Reference to the length of the array.
 * @param element The element to insert.
 * @param position The position at which to insert the element.
 * @return bool True if insertion is successful, false otherwise.
 */
bool push(int*& arr, int& inOutSize, int& inOutLength ,int element, int index) {
    if (index < 0 || index >= inOutLength) {
        return false; 
    }

    if(inOutSize + 1 > inOutLength){
        int* temp = createArray(inOutSize + 1);

        // Copy elements before the index.
        copyArray(arr, temp, index);

        temp[index] = element; // Insert the new element.

        // Copy elements after the index.
        copyArray(arr + index - 1, temp + index, inOutSize - index + 1);

        deleteArray(arr);

        arr = temp;
        ++ inOutLength;
    }
    else{
        copyArray(arr + index, arr + index + 1, inOutSize - index + 1);
        arr[index] = element;

    }

    ++inOutSize;

    return true;
}

/**
 * Removes an element from a specified position in a dynamically allocated array.
 *
 * @param arr Reference to the array pointer.
 * @param inOutSize Reference to the size of the array.
 * @param index The position from which to remove the element.
 */
void pop(int*& arr, int& inOutSize, int index) {
    if (index < 0 || index >= inOutSize) return;

    copyArray(arr + index + 1, arr + index, inOutSize - index - 1);
    --inOutSize;
}

/**
 * Searches for an element in the array and returns a pointer to it.
 *
 * @param arr Pointer to the array.
 * @param size The size of the array.
 * @param element The element to search for.
 * @return Pointer to the element if found, otherwise nullptr.
 */
int* searchElement(int* arr, int size, int element) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            return &arr[i];
        }
    }
    return nullptr;
}

// Task 6
/**
 * Removes duplicate elements from a sorted array.
 *
 * @param arr Pointer to the sorted array.
 * @param size Reference to the size of the array.
 * @return Pointer to the array with duplicates removed.
 */
void removeDuplicates(int* arr, int& inOutSize) {
    if (inOutSize <= 1) return;

     for (int i = 0; i < inOutSize - 1; ++i) {
        for (int j = i + 1; j < inOutSize;) {
            if (arr[i] == arr[j]) {
                pop(arr, inOutSize, j); 
            }
            else{
                ++j;
            }
        }
    }
}
// Task 7
/**
 * Inserts a subarray into an array at a specified position.
 *
 * @param arr Reference to the main array pointer.
 * @param size Reference to the size of the main array.
 * @param position The position at which to insert the subarray.
 * @param subarr Pointer to the subarray.
 * @param subsize The size of the subarray.
 */
void insertSubArray(int*& arr, int& inOutSize, int& inOutLength, int position, int* subarr, int subsize) {
    if (position < 0 || position > inOutSize) return;

    // Resize the array if the new size exceeds the current length
    if (inOutSize + subsize > inOutLength) {
        int newLength = inOutSize + subsize;
        int* temp = createArray(newLength);

        // Copy elements before the position
        copyArray(arr, temp, position);


        // Copy the rest of the original array
        copyArray(arr + position, temp + position + subsize, inOutSize - position);

        deleteArray(arr);
        arr = temp;
        inOutLength = newLength;
    }
    else {
        copyArray(arr + position, arr + position + subsize, inOutSize - position);
    }
    // Copy subarray
    copyArray(subarr, arr + position, subsize);
    inOutSize += subsize; // Update the size
}

// Task 8
/**
 * Extracts all positive numbers from a matrix and forms an array.
 *
 * @param matrix Pointer to the 2D matrix.
 * @param rows Number of rows in the matrix.
 * @param cols Number of columns in the matrix.
 * @param newSize Reference to the size of the new array formed.
 * @return Pointer to the new array containing only positive numbers.
 */
int* extractPositiveNumbers(int** matrix, int rows, int cols, int& newSize) {
    int count = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > 0) ++count;
        }
    }

    int* result = new int[count];
    newSize = 0;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] > 0) {
                result[newSize++] = matrix[i][j];
            }
        }
    }
    return result;
}

// Task 9
/**
 * Performs binary search in a sorted array.
 *
 * @param arr Pointer to the sorted array.
 * @param size The size of the array.
 * @param target The element to search for.
 * @return Pointer to the target element if found, otherwise nullptr.
 */
int* binarySearch(int* arr, int size, int target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return &arr[mid];
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return nullptr;
}


int main(){
    const int MATRIX_ROWS = 4, MATRIX_COLS = 7;
    int arrayLength = 10;
    int arraySize = 0;

    int* array = createArray(arrayLength);
    arraySize = arrayLength;

    int** matrix = createMatrix(MATRIX_ROWS, MATRIX_COLS);

    fillArrayWithRandomNumbers(array, arraySize, -128, 127);
    printArray(array, arraySize, arrayLength);
    cout << endl;

    int* minElement = findMinElement(array, arraySize);
    cout << "minElement " << minElement << " " << *minElement << endl;
    cout << endl;


    appendElement(array, arraySize, arrayLength, 259);
    std::cout << "295 is appended in array" << endl;
    printArray(array, arraySize, arrayLength);
    cout << endl;

    //Nor Working
    push(array, arraySize, arrayLength, 9, 2);
    std::cout << "9 is add on index 2 in array" << endl;
    std::cout <<"number on second index: " << array[2] << endl;
    printArray(array, arraySize, arrayLength);
    cout << endl;


    pop(array, arraySize, 2);
    std::cout << "pop second number on second index in array" << endl;
    printArray(array, arraySize, arrayLength);
    cout << endl;


    int* element = searchElement(array, arraySize, 259);
    cout << "searched element " << element << " " << *element;
    cout << endl;

    // Add few more numbers 
    appendElement(array, arraySize, arrayLength, 14);
    appendElement(array, arraySize, arrayLength, 259);

    removeDuplicates(array, arraySize);
    printArray(array, arraySize, arrayLength);
    cout << endl;


    int* searchedElement = binarySearch(array, arraySize, 259);
    std::cout << "Binary search:  "<<*searchedElement << endl;
    cout << endl;

    int subArrayLength = 5;
    int* subArray = createArray(subArrayLength);
    cout << "sub array to add: \n";
    fillArrayWithRandomNumbers(subArray, subArrayLength, -1, 1);
    printArray(subArray, subArrayLength, subArrayLength);

    insertSubArray(array, arraySize, arrayLength, 3, subArray, subArrayLength);
    cout << "after adding sub array: \n";
    printArray(array, arraySize, arrayLength);
    cout << endl;

    fillMatrixWithRandomNumbers(matrix, MATRIX_ROWS, MATRIX_COLS, -10, 10);
    printMatrix(matrix, MATRIX_ROWS, MATRIX_COLS);
    int lengthOfExtractArray = 0;
    int* extractPositiveNums = extractPositiveNumbers(matrix, MATRIX_ROWS, MATRIX_COLS, lengthOfExtractArray);

    printArray(extractPositiveNums , lengthOfExtractArray, lengthOfExtractArray);

    delete minElement;
    delete element;
    delete searchedElement;
    deleteArray(array);
    deleteArray(extractPositiveNums);
    deleteMatrix(matrix, MATRIX_ROWS);
}