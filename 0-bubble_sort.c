#include "sort.h"


/**
 * bubble_sort - sort a list in bubble sort
 * @array: an array
 * @size: size of the array
 * Return: Nothing
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t swap = 1;
	size_t count = 0;
	int tmp;

	if (array)
	{
		for (i = 0; swap != 0; i++)
		{
			count = 0;
			for (i = 0; i != size - 1; i++)
			{
				if (array[i] > array[i + 1])
				{
					tmp = array[i];
					array[i] = array[i + 1];
					array[i + 1] = tmp;
					count++;
					print_array(array, size);
				}
			}
			if (count == 0)
			{
				swap = 0;
			}
		}
	}
}
