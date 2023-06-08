#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural root of a number
 * @n: integer parameter
 * @root: integer parameter
 * Return: 0
 */

int support_function(int n, int root)
{
	if ((root * root) > n)
	{
		return (-1);
	}
	else if ((root * root) == n)
	{
		return (root);
	}
	else
	{
	return (support_function(n, root + 1));
	}
}
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (support_function(n, 0));
}
