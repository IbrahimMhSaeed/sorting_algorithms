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
 * bubble_sort - implementation of bubble sort algorithm
 * @array: array to be sorted
 * @size: size of array to be sorted
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (size <= 1)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
