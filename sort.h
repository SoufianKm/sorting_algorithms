#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/** File: print_array.c **/
void print_array(const int *, size_t);

/** File: print_list.c **/
void print_list(const listint_t *);

/** File: 0-bubble_sort.c **/
void bubble_sort(int *, size_t);

/** File: 1-insertion_sort_list.c **/
void insertion_sort_list(listint_t **);

/** File: 2-selection_sort.c **/
void selection_sort(int *, size_t);

/** File: 3-quick_sort.c **/
void quick_sort(int *, size_t);

#endif
