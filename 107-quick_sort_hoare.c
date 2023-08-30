#include "sort.h"
#include "funct_sort6.c"
/**
 * quick_sort_hoare - Sort an array of integers in asc
 * @array: The array to sort
 * @size: The size of the array
 */
void quick_sort_hoare(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	hoare_sort(array, size, 0, size - 1);
}

