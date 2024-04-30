#include "sort.h"

/**
 * itm_swaps - a function use to swap two integers.
 * @itm1: first integer
 * @itm2: second integer
*/
void itm_swaps(int *itm1, int *itm2)
{
	int tmp_itm;

	tmp_itm = *itm1;
	*itm1 = *itm2;
	*itm2 = tmp_itm;
}

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: the array to sort
 * @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j;

	if (array == NULL || size < 2)
	{
		return;
	}
	while (i < size)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				itm_swaps(array + j, array + j + 1);
				print_array(array, size);
			}
		}
		i++;
	}
}
