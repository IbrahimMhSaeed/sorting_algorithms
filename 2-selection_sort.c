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
 * selection_sort - algorithm for selection sort
 * @array: array to be sorted
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, idx;
	int min;

	for (i = 0; i < size; i++)
	{
		min = array[i];
		idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				idx = j;
			}
		}
		if (idx > i)
		{
			swap(&array[i], &array[idx]);
			print_array(array, size);
		}
	}
}
