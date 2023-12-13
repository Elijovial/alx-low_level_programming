#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element in the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: First index where  or -1 if not found or array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = %d\n", i, array[i]);
			if (array[i] == value)
				return (i);
		}
	}
	return (-1);
}
