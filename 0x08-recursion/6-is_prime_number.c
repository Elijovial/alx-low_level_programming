#include "main.h"

/**
 * isPrime - function the returns 1 if prime
 * @n: integer parameter
 * @i: integer parameter
 * Return: 1 if prime and 0 if otherwise
 */

int isPrime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
	{
		return (0);
	}
	return (isPrime(n, i - 1));
}

/**
 * is_prime_number - function that returns 1 if pime and 0 if otherwise
 * @n: integer parameter
 * Return: 1 if prime and 0 if otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (isPrime(n, n - 1));
}
