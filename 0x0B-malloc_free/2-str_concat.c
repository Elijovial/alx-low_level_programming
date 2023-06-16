#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenate two strings
 * @s1: pointer to a char
 * @s2: pointer toa char
 * Return: concat
*/

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int len1;
	int len2;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	len1 = 0;
	while (s1[len1])
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2])
	{
		len2++;
	}
	concat = malloc(sizeof(char) * (len1 + len2 + 1));
			if (concat == NULL)
			return (NULL);
	for (i = 0; i < len1; i++)
	{
	concat[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
	concat[i + j] = s2[j];
	}
	concat[i + j] = '\0';
	return (concat);
	}
