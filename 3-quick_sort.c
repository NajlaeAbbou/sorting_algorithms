#include "sort.h"
#include "funct_sort.c"
/**
 * quick_sort - Sort an array of integers in ascending
 * order using the quicksort algorithm
 * @array: An array of integers
 * @size: The size of the array
 * Description: Prints the array after each swap of two elements
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_lomuto_sort(array, size, 0, size - 1);
}
