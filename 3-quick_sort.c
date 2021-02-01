#include <stdio.h>
#include "sort.h"

/**
 * quick_sort - quick sort algorithm
 * @array: an array
 * @size: the size of the array
 * Return: nothing
 */
void quick_sort(int *array, size_t size)
{
	size_t i, j, k, tmp, bad_last;

	bad_last = size - 1;
	for (k = 0; k < size; k++)
	{
		i = 0;
		for (j = 0; j < bad_last; j++)
		{
			if (array[bad_last] > array[j])
			{
				if (array[i] != array[j])
				{
					tmp = array[i];
					array[i] = array[j];
					array[j] = tmp;
					print_array(array, size);
				}
				i++;
			}
		}
		if (i == bad_last)
		{
			bad_last--;
		}
		else
		{
			tmp = array[i];
			array[i] = array[bad_last];
			array[bad_last] = tmp;
			print_array(array, size);
		}
	}
}
