#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an
 * unsigned int.
 * @b: binary string
 * Return: converter number or NULL if b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len = strlen(b);
	unsigned int total = 0;
	unsigned int decval = 1;
	int i;

	if (b == NULL)
	{
		return (0);
	}
	for (i = (len - 1); i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		if (b[i] == '1')
		{
			total += decval;
		}
		decval *= 2;
	}
	return (total);
}
