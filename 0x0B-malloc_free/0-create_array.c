#include "main.h"
#include <stdlib.h>

/**
 * *create_array - function that create an array of chars
 * @size: unsigned int parameter
 * @c: character parameter
 * Return: 0
 */

char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int i
		;
	if (size == 0)
	return (array);
	array = malloc(size * sizeof(char));
	if (array == NULL)
	return (array);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
