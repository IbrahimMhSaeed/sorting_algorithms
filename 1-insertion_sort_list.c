#include "sort.h"
#include <stdio.h>
/**
 * swap_list - swap two element in linkedList
 * @x: first element
 * @y: second element
 */

void swap_list(listint_t *x, listint_t *y)
{
	listint_t *temp;

	temp = y->prev;
	y->prev = x;
	x->prev = temp;
	if (temp != NULL)
		temp->next = x;

	temp = x->next;
	x->next = y;
	y->next = temp;
	if (temp != NULL)
		temp->prev = y;
}


/**
 * insertion_sort_list - sort list using insertion
 * @list: list to be sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *start;
	listint_t *stop;

	start = *list;
	if (*list == NULL)
		return;
	if ((*list)->next == NULL)
		return;

	while (start != NULL)
	{
		stop = start->prev;
		while (stop != NULL)
		{
			if (start->n < stop->n)
			{
				if (stop == *list)
					*list = start;
				swap_list(start, stop);
				if (stop->prev == NULL)
					printf("%d\n", stop->n);
				print_list(*list);
			}
			stop = stop->prev;
		}
		start = start->next;
	}
}
