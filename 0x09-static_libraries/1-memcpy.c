#include "main.h"
/**
 * _memcpy - function that copies the memory area
 * @dest: destination parameter
 * @src: source parameter
 * @n: size of bytes
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
