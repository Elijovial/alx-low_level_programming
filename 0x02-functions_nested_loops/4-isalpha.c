#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: character to check
 * Return 1 if a letter,lowercase or uppercase, 0 otherwise
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
 	return (1);
 	else
 	{
 	return (0);
	}
	_putchar('\n');
}
