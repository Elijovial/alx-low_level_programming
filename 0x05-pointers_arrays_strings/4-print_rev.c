#include "main.h"

/**
 * print_rev - print a string in reversed followed by a new line
 * @s: string
 * Return: 0 success
 */

void print_rev(char *s)
{
int i = 62;

	while (s[i] != '\0')
	{
	_putchar(s[i]);
	--i;
	}
_putchar('\n');
}
