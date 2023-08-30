#include "sort.h"
#include "funct_sort4.c"
/**
 * radix_sort - Sort an array of integers in asc
 * @array: The array to  sort
 * @size: The size of the array
 */
void radix_sort(int *array, size_t size)
{
	int max, signal, *buff;

	if (array == NULL || size < 2)
		return;

	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
		return;

	max = _max(array, size);
	for (signal = 1; max / signal > 0; signal *= 10)
	{
		_counting_sort(array, size, signal, buff);
		print_array(array, size);
	}

	free(buff);
}

