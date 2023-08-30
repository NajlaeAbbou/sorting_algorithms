#include "sort.h"

/**
 * shell_sort - function that sorts an array of integer.
 * @array: The array
 * @size: lenght of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t intv = 1, i, iner;
	int insertv;

	if (array == NULL || size < 2)
		return;
	while (intv < size / 3)
		intv = intv * 3 + 1;

	while (intv > 0)
	{
		for (i = intv; i < size; i++)
		{
			insertv = array[i];
			iner = i;

			while (iner > intv - 1 && array[iner - intv] >= insertv)
			{
				array[iner] = array[iner - intv];
				iner = iner - intv;
			}

			array[iner] = insertv;
		}
		print_array(array, size);
		intv = (intv - 1) / 3;
	}
}
