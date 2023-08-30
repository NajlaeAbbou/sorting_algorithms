#include "sort.h"

/**
 * selection_sort - Sort an array of integers in asc.
 * @array: The array to sort
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t a, b, t, m, len;

	a = 0;
	b = 1;
	t = 0;
	m = 0;
	len = size - 1;
	if (size < 2)
		return;

	while (a < len)
	{
		if (b == size)
		{
			if (a != m)
			{
				t = array[a];
				array[a] = array[m];
				array[m] = t;
				print_array(array, size);
			}

			++a;
			m = a;
			b = a + 1;
			continue;
		}

		if (array[m] > array[b])
			m = b;

		++b;
	}
}
