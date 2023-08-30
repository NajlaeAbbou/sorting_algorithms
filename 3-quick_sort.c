#include "sort.h"

/**
 * _lomuto_sort - Implement the quicksort algorithm through recursion
 * @array: An array of integers to sort
 * @size: The size of the array
 * @left: The starting index of the array partition to order
 * @right: The ending index of the array partition to order
 */
void _lomuto_sort(int *array, size_t size, int left, int right)
{
	int part;
	if (right - left > 0)
	{
	part = _lomuto_partition(array, size, left, right);
	_lomuto_sort(array, size, left, part - 1);
	_lomuto_sort(array, size, part + 1, right);
	}
}

/**
 * _lomuto_partition - Order a subset of an array of integers
 * @array: The array of integers
 * @size: The size of the array
 * @left: The starting index
 * @right: The ending index
 */
int _lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below, *tmp, *a, *b;

		pivot = array + right;
		for (above = below = left; below < right; below++)
		{
			if (array[below] < *pivot)
			{
				if (above < below)
				{
					a = array + below;
					b = array + above;
					tmp = a;
					a = b;
					b = tmp;
					print_array(array, size);
				}
				above++;
			}

		if (array[above] > *pivot)
		{
			a = array + above;
			b = pivot;
			tmp = a;
			a = b;
			b = tmp;
			print_array(array, size);
		}
		return(above);
}
/**
 * quick_sort - Sort an array of integers in asc
 * @array: An array of integers
 * @size: The size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	_lomuto_sort(array, size, 0, size - 1);
}
