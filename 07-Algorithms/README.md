##  Basic array functions

- Insert a new element to the end of an array
``` c++
bool pushBack(int array[], unsigned capacity, unsigned& inOutSize, int value) {
    if(inOutSize >= capacity) {
        return false;
    }

    array[inOutSize] = value;
    ++inOutSize;
    return true;
}
```

- Remove last element
``` c++
bool popBack(int array[], unsigned& inOutSize) {
    if (inOutSize == 0) {
        return false;
    }
    inOutSize--;
    return true;
}
```

- Insert element on index 
``` c++
bool insertAt(int array[], unsigned capacity, unsigned& inOutSize, unsigned index, int value) {
    if (inOutSize >= capacity || index > inOutSize) {
        return false;
    }

    for (int i = inOutSize; i > index; i--) {
        array[i] = array[i - 1];
    }
    array[index] = value;
    inOutSize++;
    return true;
}
```

- Erase element at index in array
``` c++
bool eraseAt(int array[], unsigned& inOutSize, unsigned index) {
    if (index >= inOutSize) {
        return false;
    }

    for (int i = index; i < inOutSize - 1; i++) {
        array[i] = array[i + 1];
    }
    inOutSize--;
    return true;
}
```

- Erase element at index in array (without keeping the order)
``` c++
bool eraseAtUnordered(int array[], unsigned& inOutSize, unsigned index) {
    if (index >= inOutSize) {
        return false;
    }

    if (index != inOutSize - 1)
        std::swap(array[index], array[inOutSize - 1]);

    --inOutSize;
    return true;
}
```

## Sorting algorithms
- [Bubble sort](https://www.youtube.com/watch?v=xli_FI7CuzA)
``` c++
void bubbleSort(int array[], unsigned size) {
     for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}
```

- Bubble sort optimization
``` c++
void bubbleSort(int array[], unsigned size){
     for (int i = 0; i < size - 1; i++) {
        bool isSorted = true;

        for (int j = 0; j < size - i - 1; j++) {

            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;

                isSorted = false;
            }
        }

        if (isSorted)
            break;
    }
}
```

- [Insertion Sort](https://www.youtube.com/watch?v=JU767SDMDvA)
``` c++
void insertionSort(int arr[], unsigned size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
```

- [Selection Sort](https://www.youtube.com/watch?v=g-PGLbMth_g)
``` c++
void selectionSort(int arr[], unsigned size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }

        if (minIndex != i)
            std::swap(arr[minIndex], arr[i]);
    }
}

```

## Search algorithms
- [Binary search](https://www.youtube.com/watch?v=fDKIpRe8GW4)
``` c++
int binarySearch(int array[], unsigned size, int target) {
    int low = 0;
    int high = size - 1;
    int mid = (low + high) / 2;

    while (low <= high) {
        if (array[mid] < target) {
            low = mid + 1;
        }
        else if (array[mid] == target) {
            return mid;
        }
        else {
            high = mid - 1;
        }
        mid = (low + high) / 2;
    }

    return -1;  // not found
}

```