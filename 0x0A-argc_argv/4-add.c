#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - program starts here
 * @argc: argument count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;
	int add = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			char *str = argv[i];

			while (*str != '\0')
			{
			if (!isdigit(*str))
			{
				printf("Error\n");
				return (1);
			}
			str++;
			}
		add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}
