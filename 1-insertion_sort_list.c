#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * in ascending order using the Insertion sort algorithm and prints
 * the list after each time you swap two elements
 *
 * @list: pointer to the linked list to sort
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *previous;

	if (!list || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;
	while (current)
	{
		next = current->next;
		while (current->prev && (current->n < current->prev->n))
		{
			previous = current->prev;
			current->prev = previous->prev;
			if (current->prev)
				current->prev->next = current;
			else
				*list = current;

			previous->next = current->next;
			if (previous->next)
				previous->next->prev = previous;

			current->next = previous;
			previous->prev = current;
			print_list(*list);
		}

		current = next;
	}
}
