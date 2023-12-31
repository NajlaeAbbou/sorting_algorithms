/**
 * swap_integers - Swap two integers in an array.
 * @a: The first integer to swap.
 * @b: The second integer to swap.
 */
void swap_integers(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * _lomuto_partition - Order a subset of an array of integers according to
 * @array: The array of integers
 * @size: The size
 * @left: The starting ind
 * @right: The end
 */
int _lomuto_partition(int *array, size_t size, int left, int right)
{
	int *pivot, above, below;

	pivot = array + right;
	for (above = below = left; below < right; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_integers(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_integers(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * _lomuto_sort - Implement the quicksort algorithm through recursion
 * @array: An array of integers to sort
 * @size: The size of the array
 * @left: The starting index of the array partition to order
 * @right: The ending index of the array partition to order
 * Description: Uses the Lomuto partition scheme
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
