#include "sort.h"

/**
 * swap_and_print - swaps two elements in an array and print
 * the array.
 *
 * @array: array to modify.
 * @left: index of the left element.
 * @right: index of the right element.
 * @right: number of integers in array.
 */
void swap_and_print(int *array, size_t left, size_t right, size_t size)
{
	int aux;

	if (array != NULL)
	{
		aux = array[left];
		array[left] = array[right];
		array[right] = aux;
		print_array(array, size);
	}
}

/**
 * quick_sort_lomuto - sorts a sub array using the quick
 * sort algorithm and Lomuto's partition scheme.
 *
 * @array: pointer to array of integers to be sorted.
 * @beg: start of array.
 * @end: end of array.
 * @size: number of integers in array.
 */
void quick_sort_lomuto(int *array, size_t beg, size_t end, size_t size)
{
	size_t i, partition_index = beg;
	int pivot = array[end];

	for (i = beg; i < end; i++)
	{
		if (array[i] <= pivot)
		{
			if (partition_index != i)
				swap_and_print(array, partition_index, i, size);

			partition_index++;
		}
	}
	if (partition_index != end)
		swap_and_print(array, partition_index, end, size);

	if (partition_index - beg > 1)
		quick_sort_lomuto(array, beg, partition_index - 1, size);
	if (end - partition_index > 1)
		quick_sort_lomuto(array, partition_index + 1, end, size);
}

/**
 * quick_sort - sorts an array using the quick sort algorithm
 * and Lomuto's partition scheme.
 *
 * @array: array to sort.
 * @size: number of arrays in array.
 */
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	quick_sort_lomuto(array, 0, size - 1, size);
}
