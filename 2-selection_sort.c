#include <stdio.h>
#include "sort.h"

/**
 * selection_sort - selection sort algorithm
 * @array: an array
 * @size: the size of the array
 * Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, k, tmp;
	int result;

	if (array)
	{
		for (i = 0; i < size - 1; i++)
		{
			result = 0;
			k = i;
			for (j = i + 1; j < size; j++)
			{
				if ((array[i] - array[j]) > result)
				{
					result = array[i] - array[j];
					k = j;
				}
			}
			if (array[k] < array[i])
			{
				tmp = array[i];
				array[i] = array[k];
				array[k] = tmp;
				print_array(array, size);
			}
		}
	}
}
