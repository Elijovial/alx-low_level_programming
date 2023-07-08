#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to a given index
 * @n: integer
 * @index: index number
 * Return: 1 or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
