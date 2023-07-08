#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: integer
 * @index: index starting from 0
 * Return: index or -1 if an error occurs
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int)) * 8 - 1)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
