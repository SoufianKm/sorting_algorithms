#include "sort.h"
#include <stdio.h>


/**
 * selection_sort - sorts an array of integers in ascending
 * order using the Selection sort algorithm prints
 * the array after each time two elements swapped
 *
 * @array: The array
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_j;
	int aux;

	for (i = 0; i < size - 1; i++)
	{
		min_j = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_j])
				min_j = j;
		}

		if (min_j != i)
		{
			aux = array[i];
			array[i] = array[min_j];
			array[min_j] = aux;
			print_array(array, size);
		}
	}
}
