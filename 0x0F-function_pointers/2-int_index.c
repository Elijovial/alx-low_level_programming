#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for integer
 * @array: array
 * @size: size of array
 * @cmp: function pointer to a function
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
