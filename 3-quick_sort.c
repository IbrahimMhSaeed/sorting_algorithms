#include "sort.h"


/**
 * swap - swap two elements
 * @x: first element
 * @y: second element
 */

void swap(int *x, int *y)
{
	int temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/**
 * partition - swap element (j) to left (i) if element is less that pivot
 * @arr: array to be sorted
 * @low: lower bound of array
 * @high: higher bound of array
 * @size: size of array
 * Return: index of pivot
 */

size_t partition(int *arr, int low, int high, size_t size)
{
	int i, j;
	int pi;

	i = low - 1;
	pi = arr[high];
	for (j = low; j < high; j++)
	{
		if (arr[j] < pi)
		{
			i++;
			swap(&arr[i], &arr[j]);
			print_array(arr, size);
		}
	}
	if ((i + 1) < high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
}

/**
 * sort_quick - get pivot index value sort left part sort right part
 * @arr: array to be sorted
 * @low: lower bound of array
 * @high: higher bound of array
 * @size: size of array
 */

void sort_quick(int *arr, int low, int high, size_t size)
{
	size_t pi;

	if (high > low)
	{

	pi = partition(arr, low, high, size);
	sort_quick(arr, low, pi - 1, size);
	sort_quick(arr, pi + 1, high, size);
	}
}

/**
 * quick_sort - algorithm for quick sort
 * @array: array to be sorted
 * @size: size of the array
 */

void quick_sort(int *array, size_t size)
{
	sort_quick(array, 0, size - 1, size);
}
