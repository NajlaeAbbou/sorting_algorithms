#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers asc
 * @array: The array to sort
 * @size: The size of array
 */
void bubble_sort(int *array, size_t size)
{
	int a, t, ln, s;

	a = 0;
	t = 0;
	ln = 0;
	s = 1;
	if (!array || size < 2)
		return;

	ln = size - 1;

	for (; a < ln; ++a)
	{
		if (array[a] > array[a + 1])
		{
			t = array[a];
			array[a] = array[a + 1];
			array[a + 1] = t;
			s = 1;
			print_array(array, size);
		}

		if (s == 1 && a == ln - 1)
			a = -1, s = 0, --ln;
	}
}
