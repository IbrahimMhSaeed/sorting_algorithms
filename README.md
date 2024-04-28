# Sorting Algorithms

In computer science, a sorting algorithm is an algorithm that puts elements of a list into an order. The most frequently used orders are numerical order and lexicographical order, and either ascending or descending.

Formally, the output of any sorting algorithm must satisfy two conditions:

- The output is in monotonic order (each element is no smaller/larger than the previous element, according to the required order).
- The output is a permutation (a reordering, yet retaining all of the original elements) of the input. (*Stable Algorithm*)

## History and concepts

- Among the authors of early sorting algorithms around 1951 was Betty Holberton
-  Bubble sort was analyzed as early as 1956
- mid-20th century – new algorithms are still being invented, with the widely used **Timsort** dating to 2002, and the **library sort** being first published in 2006.

## Classification

Sorting algorithms can be classified by:

- Computational complexity
	- Best, worst and average case behavior in terms of the size of the list. good behavior is O(n log n).
	- Swaps for "in-place" algorithms.
- Memory usage Strictly, an in-place sort needs only O(1) Memory
- Recursion: Some algorithms are either recursive or non-recursive, while others may be both (e.g., merge sort).
- Stability: stable sorting algorithms maintain the relative order of records with equal keys.
- Whether or not they are a comparison sort.

## What is a plain English explanation of "Big O" notation?

![Alt text](https://i.stack.imgur.com/WcBRI.png "Explanation of Big-O")

Big Oh notation is a relative representation of the complexity of an algorithm.

Visit this website to know more:
https://stackoverflow.com/questions/487258/what-is-a-plain-english-explanation-of-big-o-notation

### Difference between Big O vs Big Theta Θ vs Big Omega Ω Notations

|Big O – Upper Bound 	|Big Omega (Ω) – Lower Bound 	|Big Theta (Θ) – Tight Bound
|-----------------------|-------------------------------|--------------------------------
|It is define as upper bound (the worst case performance).|	It is define as lower bound (best case).	|It is define as tightest bound and tightest bound (average case

## Sorting Algorithms

### Bubble Sort

Time Complexity: O(N2)
Auxiliary Space: O(1)

In Bubble Sort algorithm, 
- traverse from left and compare adjacent elements and the higher one is placed at right side. 
- In this way, the largest element is moved to the rightmost end at first. 
- This process is then continued to find the second largest and place it and so on until the data is sorted.
[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526103842/1.webp "first iteration of bubble sort")

[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526103914/2.webp "second iteration of bubble sort")

**implementation of Bubble sort**
```
void bubbleSort(int arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }

        // If no two elements were swapped by inner loop,
        // then break
        if (swapped == false)
            break;
    }
}
```
### Insertion Sort

Time Complexity: O(N^2) 
Auxiliary Space: O(1)

Is a simple sorting algorithm that works by iteratively inserting each element of an unsorted list into its correct position in a sorted portion of the list.

**Algorithm:**

- We have to start with second element of the array as first element in the array is assumed to be sorted.
- Compare second element with the first element and check if the second element is smaller then swap them.
- Move to the third element and compare it with the second element, then the first element and swap as necessary to put it in the correct position among the first three elements.
- Continue this process, comparing each element with the ones before it and swapping as needed to place it in the correct position among the sorted elements.
- Repeat until the entire array is sorted.

[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20240408140301/Insertion-Sort.webp "Visualization of Insertion sort")

```
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
```

### Selection Sort

Time Complexity: O(N2)
Auxiliary Space: O(1)

Is a simple and efficient sorting algorithm that works by repeatedly selecting the smallest (or largest) element from the unsorted portion of the list and moving it to the sorted portion of the list. 

[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230524115038/1.webp "first iteration of selection sort searching for smallest element")

[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526165135/2.webp "second itertion")

[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526165200/3.webp "third itertion")

**Implementation:**
```
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
           if(min_idx != i)
            swap(&arr[min_idx], &arr[i]);
    }
}
```

### Quick Sort

Time Complexity:
- Best Case: Ω (N log (N))
- Average Case: θ ( N log (N))
- Worst Case: O(N2)

Auxiliary Space: O(1)
*If we consider the recursive stack space then, in the worst case quicksort could make O(N).*

Is a sorting algorithm based on the Divide and Conquer algorithm that picks an element as a pivot and partitions the given array around the picked pivot by placing the pivot in its correct position in the sorted array.

**Quick Sort Algorithm:**
[!Alt text](https://www.geeksforgeeks.org/wp-content/uploads/gq/2014/01/QuickSort2.png "drawing explain the concept of algorithm")

**Choice of Pivot:**
- Always pick the first element as a pivot.
- Always pick the last element as a pivot (implemented below)
- Pick a random element as a pivot.
- Pick the middle as the pivot.

[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526114635/1.webp "pointer i points to -1 and pointer j points to 10")
[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526114837/2.webp "pointer i points to 10 and pointer i points ot 80")
[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526114951/3.webp "pointer i points to 10 incremented by one and point to 80, j points to 30")
[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526115052/4.webp "i points to 30, j points to 90")
[!Alt text](https://media.geeksforgeeks.org/wp-content/uploads/20230526115200/5.webp "swap pivot with i+1")

**Implementation:**
```
void swap(int* p1, int* p2)
{
    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int partition(int arr[], int low, int high)
{
    // choose the pivot
    int pivot = arr[high];

    // Index of smaller element and Indicate
    // the right position of pivot found so far
    int i = (low - 1);

    for (int j = low; j <= high; j++) {
        // If current element is smaller than the pivot
        if (arr[j] < pivot) {
            // Increment index of smaller element
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}

// The Quicksort function Implement

void quickSort(int arr[], int low, int high)
{
    // when low is less than high
    if (low < high) {
        // pi is the partition return index of pivot

        int pi = partition(arr, low, high);

        // Recursion Call
        // smaller element than pivot goes left and
        // higher element goes right
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
```

