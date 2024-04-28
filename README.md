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
