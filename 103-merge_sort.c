#include "sort.h"
#include "funct_sort2.c"
/**
 * merge_sort - Sorts an array of integers in asc
 * @array: The array to sort
 * @size: The size of the array
 */
void merge_sort(int *array, size_t size)
{
	int *buff;

	if (array == NULL || size < 2)
		return;

	buff = malloc(sizeof(int) * size);
	if (buff == NULL)
		return;

	merge_sortrecursive(array, buff, 0, size);

	free(buff);
}
