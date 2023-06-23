#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all its parameters
 * @n: integer parameter
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(num, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}
	return (sum);
}
