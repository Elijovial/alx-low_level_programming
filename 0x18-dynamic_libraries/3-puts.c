#include "main.h"

/**
 * _puts - prints strings followed by a new line
 * @str: string parameter
 * Return: 0 success
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\n' && str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
