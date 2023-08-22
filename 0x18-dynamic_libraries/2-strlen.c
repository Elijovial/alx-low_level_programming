#include "main.h"

/**
 * _strlen - functions that returns the length of a string.
 * @s: character parameter
 * Return: length of function
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
return (len);
}

