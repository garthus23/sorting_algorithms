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

	for (i = 0; i < size; i++)
	{
		k = i;
		for (j = i; j < size; j++)
		{
			if (array[k] > array[j])
			{
				tmp = array[j];
				array[j] = array[k];
				array[k] = tmp;
			}
		}
		print_array(array, size);
	}
	print_array(array, size);
}
