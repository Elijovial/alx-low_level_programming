#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that execute a function given as a parameter to
 * each element of an array
 * @array: array element
 * @size: size of array
 * @action: function pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array != NULL && size != NULL)
	{
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}
