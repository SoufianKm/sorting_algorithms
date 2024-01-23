#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm and prints the array after
 * each time two elements swapped
 *
 * @array: array of integers to be sorted
 * @size: number of integers in array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	int aux, count = -1;

	if (size < 2)
		return;

	while (count)
	{
		count = 0;
		for (i = 0; i < size - 1; i++)
			if (array[i] > array[i + 1])
			{
				aux = array[i];
				array[i] = array[i + 1];
				array[i + 1] = aux;
				count++;
				print_array(array, size);
			}
	}
}
