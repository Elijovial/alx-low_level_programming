#include "main.h"
/**
 * print_sign - prints the sign if a number
 * @n: greater than zero, equal to zero and less than zero
 * Return: 1 if n is greater than 0, 0 if n is 0 and -1 if n is less than 0
 */

int print_sign(int n)
{
	int n;
if (n > 0)
	{
	_putchar('+');
return (1);
	}
elseif(n = 0)
	{
	_putchar('-');
return (0);
	}
elseif(n < -1)
	{
	_putchar('-');
return (-1);
	}
	_putchar('\n');
}
