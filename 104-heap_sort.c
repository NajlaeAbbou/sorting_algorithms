#include "sort.h"
#include "funct_sort3.c"

/**
 * heap_sort - Sorts an array of integers in asc
 * @array: The array to sort
 * @size: The size of the array
 */
void heap_sort(int *array, size_t size)
{
	int i;

	if (array == NULL || size < 2)
		return;

	for (i = (size / 2) - 1; i >= 0; i--)
		max_heap(array, size, size, i);

	for (i = size - 1; i > 0; i--)
	{
		swap_integers(array, array + i);
		print_array(array, size);
		max_heap(array, size, i, 0);
	}
}
