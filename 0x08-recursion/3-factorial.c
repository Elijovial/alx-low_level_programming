#include "main.h"

/**
 * factorial - Calculate the factorial of a number
 * @n: the number to caculate the factorial
 *
 * Return: integer value or -1
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n > 0)
		return (n * factorial(n - 1));
	return (1);
}
