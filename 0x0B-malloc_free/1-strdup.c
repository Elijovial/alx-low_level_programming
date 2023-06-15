#include "main.h"
#include <stdlib.h>

/**
 * *_strdup - a function that returns an array to a newly allocated space
 * @str: pointer to a character
 * Return: 0
 */
char *_strdup(char *str)
{
	char *dup;
	int len, i;

if (str == NULL)
{
	return (NULL);
}
	len = 0;
	while (str[len])
{
	len++;
}

dup = malloc(sizeof(char) * (len + 1));
if (dup == NULL)
{
	return (NULL);
}
	for (i = 0; i < len; i++)
{
	dup[i] = str[i];
	dup[len] = '\0';
}
return (dup);
}

