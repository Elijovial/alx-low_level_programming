#include "main.h"

/**
 * factorial - function that return factorial of a given number
 * @n: integer parameter
 * Return: 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
