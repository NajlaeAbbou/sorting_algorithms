#include "sort.h"
#include "funct_sort5.c"
/**
 * bitonic_sort - Sort an array of integers in asc
 * @array: The array to  sort
 * @size: The size of the array
 */
void bitonic_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_bitonic(array, size, 0, size, UP);
}

