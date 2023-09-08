#include "hash_tables.h"

/**
 * hash_djb2 - Implements the djb2 algorithm
 * @str: The string to be hashed
 * Return: The hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	/* Initialize hash to 5381 */
	hash = 5381;
	/* Loop over each character of the string */
	while ((c = *str++))
	{
		/* Update hash using the formula */
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	/* Return the final hash value */
	return (hash);
}
